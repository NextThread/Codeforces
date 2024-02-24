#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e6 + 10;
ll n, m, k;
vector<int> g[N];
int c[N];
ll res;

map<int, int> dfs(int u, int fa){
	map<int, int> mp;
	for(auto x : g[u]){
		if(x == fa) continue;
		auto f = dfs(x, u);
		res += f[c[u]];
		if(f.size() > mp.size()) swap(f, mp);
		
		for(auto [x, y] : f){
			if(x != c[u]){
				res += y * mp[x];
				mp[x] += y;
			}
		}
	}
	mp[c[u]] = 1;
	return mp;
}

void solve(){
	cin >> n;
	res = 0;
	for(int i = 1; i <= n; i ++ ) g[i].clear();
	for(int i = 1; i <= n; i ++ ) cin >> c[i];
	for(int i = 1; i < n; i ++ ){
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	dfs(1, 0);
	cout << res << '\n';
}


int main() {
	int timer = 1; cin >> timer; 
  while (timer--)
	  solve();
}
