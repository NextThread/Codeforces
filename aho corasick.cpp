#include <bits/stdc++.h>
using namespace std;

// Each node of Trie
struct Node {
    int next[26];   // store next characters (a-z)
    int fail;       // failure link
    vector<int> out; // which patterns end here

    Node() {
        // initialize all next as -1 (means no connection)
        memset(next, -1, sizeof(next));
        fail = 0; // initially fail points to root
    }
};

// our trie (list of nodes)
vector<Node> trie(1); // start with 1 node (root)

// STEP 1: insert pattern into trie
void insert(string s, int id) {
    int node = 0; // start from root

    for (char c : s) { // go through each character
        int idx = c - 'a'; // convert char to index (0 to 25)

        // if path doesn't exist, create new node
        if (trie[node].next[idx] == -1) {
            trie[node].next[idx] = trie.size(); // new node index
            trie.push_back(Node()); // create node
        }

        // move to next node
        node = trie[node].next[idx];
    }

    // mark that this pattern ends here
    trie[node].out.push_back(id);
}

// STEP 2: build failure links
void build() {
    queue<int> q; // BFS queue

    // initialize root's children
    for (int i = 0; i < 26; i++) {
        if (trie[0].next[i] != -1) {
            // if child exists
            trie[trie[0].next[i]].fail = 0; // fail to root
            q.push(trie[0].next[i]); // push into queue
        } else {
            // if no child, point back to root (important trick)
            trie[0].next[i] = 0;
        }
    }

    // BFS traversal
    while (!q.empty()) {
        int node = q.front(); // current node
        q.pop();

        for (int i = 0; i < 26; i++) {
            if (trie[node].next[i] != -1) {
                int child = trie[node].next[i];

                // set failure link
                trie[child].fail = trie[trie[node].fail].next[i];

                // copy output from fail node
                for (int x : trie[trie[child].fail].out) {
                    trie[child].out.push_back(x);
                }

                q.push(child); // continue BFS
            } else {
                // if no edge, follow fail link
                trie[node].next[i] = trie[trie[node].fail].next[i];
            }
        }
    }
}

// STEP 3: search in text
void search(string text, vector<string>& patterns) {
    int node = 0; // start from root

    for (int i = 0; i < text.size(); i++) {
        char c = text[i];
        int idx = c - 'a';

        // move in trie (automatic fail handling)
        node = trie[node].next[idx];

        // check if any pattern ends here
        for (int id : trie[node].out) {
            // print result
            cout << "Found: " << patterns[id]
                 << " at index " << i - patterns[id].size() + 1 << "\n";
        }
    }
}

// MAIN FUNCTION
int main() {
    // patterns to search
    vector<string> patterns = {"he", "she", "his", "hers"};

    // text where we search
    string text = "ahishers";

    // insert all patterns into trie
    for (int i = 0; i < patterns.size(); i++) {
        insert(patterns[i], i);
    }

    // build failure links
    build();

    // search patterns in text
    search(text, patterns);

    return 0;
}
