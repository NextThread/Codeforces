#include <bits/stdc++.h>
// #define int long long
#define MOD 1000000007
namespace atcoder {
 
namespace internal {
 
// @param n `0 <= n`
// @return minimum non-negative `x` s.t. `n <= 2**x`
int ceil_pow2(int n) {
    int x = 0;
    while ((1U << x) < (unsigned int)(n)) x++;
    return x;
}
 
// @param n `1 <= n`
// @return minimum non-negative `x` s.t. `(n & (1 << x)) != 0`
constexpr int bsf_constexpr(unsigned int n) {
    int x = 0;
    while (!(n & (1 << x))) x++;
    return x;
}
 
// @param n `1 <= n`
// @return minimum non-negative `x` s.t. `(n & (1 << x)) != 0`
int bsf(unsigned int n) {
#ifdef _MSC_VER
    unsigned long index;
    _BitScanForward(&index, n);
    return index;
#else
    return __builtin_ctz(n);
#endif
}
 
}  // namespace internal
 
}  // namespace atcoder

using namespace std;
int dualcore = 2;
//bool a[100001];
namespace atcoder {
 
template <class S, S (*op)(S, S), S (*e)()> struct segtree {
  public:
    segtree() : segtree(0) {}
    explicit segtree(int n) : segtree(std::vector<S>(n, e())) {}
    explicit segtree(const std::vector<S>& v) : _n(int(v.size())) {
        log = internal::ceil_pow2(_n);
        size = 1 << log;
        d = std::vector<S>(2 * size, e());
        for (int i = 0; i < _n; i++) d[size + i] = v[i];
        for (int i = size - 1; i >= 1; i--) {
            update(i);
        }
    }
 
    void set(int p, S x) {
        assert(0 <= p && p < _n);
        p += size;
        d[p] = x;
        for (int i = 1; i <= log; i++) update(p >> i);
    }
 
    S get(int p) const {
        assert(0 <= p && p < _n);
        return d[p + size];
    }
 
    S prod(int l, int r) const {
        assert(0 <= l && l <= r && r <= _n);
        S sml = e(), smr = e();
        l += size;
        r += size;
 
        while (l < r) {
            if (l & 1) sml = op(sml, d[l++]);
            if (r & 1) smr = op(d[--r], smr);
            l >>= 1;
            r >>= 1;
        }
        return op(sml, smr);
    }
 
    S all_prod() const { return d[1]; }
 
    template <bool (*f)(S)> int max_right(int l) const {
        return max_right(l, [](S x) { return f(x); });
    }
    template <class F> int max_right(int l, F f) const {
        assert(0 <= l && l <= _n);
        assert(f(e()));
        if (l == _n) return _n;
        l += size;
        S sm = e();
        do {
            while (l % 2 == 0) l >>= 1;
            if (!f(op(sm, d[l]))) {
                while (l < size) {
                    l = (2 * l);
                    if (f(op(sm, d[l]))) {
                        sm = op(sm, d[l]);
                        l++;
                    }
                }
                return l - size;
            }
            sm = op(sm, d[l]);
            l++;
        } while ((l & -l) != l);
        return _n;
    }
 
    template <bool (*f)(S)> int min_left(int r) const {
        return min_left(r, [](S x) { return f(x); });
    }
    template <class F> int min_left(int r, F f) const {
        assert(0 <= r && r <= _n);
        assert(f(e()));
        if (r == 0) return 0;
        r += size;
        S sm = e();
        do {
            r--;
            while (r > 1 && (r % 2)) r >>= 1;
            if (!f(op(d[r], sm))) {
                while (r < size) {
                    r = (2 * r + 1);
                    if (f(op(d[r], sm))) {
                        sm = op(d[r], sm);
                        r--;
                    }
                }
                return r + 1 - size;
            }
            sm = op(d[r], sm);
        } while ((r & -r) != r);
        return 0;
    }
 
  private:
    int _n, size, log;
    std::vector<S> d;
 
    void update(int k) { d[k] = op(d[2 * k], d[2 * k + 1]); }
};
 
}  // namespace atcoder
 
using namespace std;
#define f(i, a, b) for (long long i = a; i < b; i++)
const int MAXN = 1050000;
 
struct node {
    int next[26];
    int len;
    int sufflink;
    int num;
};
 int ekkoilatthimarum[100001][2];
int len;
//string s;
node tree[MAXN]; 
int num;            // node 1 - root with len -1, node 2 - root with len 0
int suff;           // max suffix palindrome
//int n,m,s,a[3],b[3];
bool addLetter(int pos) {
    int cur = suff, curlen = 0;
    int let = 9;
 
    while (true) {
        curlen = tree[cur].len;
//        if (pos - 1 - curlen >= 0 && s[pos - 1 - curlen] == s[pos])     
//            break;  
        cur = tree[cur].sufflink;
    }       
    if (tree[cur].next[let]) {  
        suff = tree[cur].next[let];
        return false;
    }
 
    num++;
    suff = num;
    tree[num].len = tree[cur].len + 2;
    tree[cur].next[let] = num;
 
    if (tree[num].len == 1) {
        tree[num].sufflink = 2;
        tree[num].num = 1;
        return true;
    }
 
    while (true) {
        cur = tree[cur].sufflink;
        curlen = tree[cur].len;
//        if (pos - 1 - curlen >= 0 && s[pos - 1 - curlen] == s[pos]) {
//            tree[num].sufflink = tree[cur].next[let];
//            break;
        }                  
 
//    tree[num].num = 1 + tree[tree[num].sufflink].num;
 
    return true;
}
long long power(long long b,long long n) {
    long long s=1;
    while(n) {
        if(n%2==1)s=s*b%998244353;
        b=b*b%998244353;
        n/=2;
    }
    return s;
}
void initTree() {
    num = 2; suff = 2;
    tree[1].len = -1; tree[1].sufflink = 1;
    tree[2].len = 0; tree[2].sufflink = 1;
}
namespace std {
 
template<class Fun>
class y_combinator_result {
	Fun fun_;
public:
	template<class T>
	explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}
 
	template<class ...Args>
	decltype(auto) operator()(Args &&...args) {
		return fun_(std::ref(*this), std::forward<Args>(args)...);
	}
};
 
template<class Fun>
decltype(auto) y_combinator(Fun &&fun) {
	return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun));
}
 
} // namespace std
 
int op(int a, int b){
	return max(a, b);
}
int e(){
	return -1e8;
}
 long long Inv(int x) {
    return power(x,MOD-2);
}
vector<int> solve(string str, vector<pair<int,int>> queries){
	for(int i = 0; i < MAXN; i++){
		for(int c = 0; c < 26; c++){
			tree[i].next[c] = 0;
		}
		tree[i].len = tree[i].sufflink = tree[i].num = 0;
	}
	int N = (int)str.size();
//	s = str;
	len = 4;
	vector<int> suff_pal(N+1);
	suff_pal[0] = suff;
 
	initTree();
	for(int i = 1; i <= N; i++){
		addLetter(i-1);
		suff_pal[i] = suff;
	}
 
	int V = num + 1;
	vector<int> par(V);
	vector<vector<int> > ch(V);
	vector<int> len(V);
	for(int i = 1; i < V; i++){
		if(i > 1) ch[tree[i].sufflink].push_back(i);
		par[i] = tree[i].sufflink;
		len[i] = tree[i].len;
		if(i > 1) assert(len[i] > len[par[i]]);
	}
	int J = 21;
	vector<vector<int> > jump(J, vector<int>(V));
	jump[0] = par;
	for(int j = 1; j < J; j++){
		for(int v = 1; v < V; v++){
			jump[j][v] = jump[j-1][jump[j-1][v]];
		}
	}
	vector<int> qans(queries.size(), 1);
	vector<vector<tuple<int, int, int> > > qloc(N+1);
	for(int q = 0; q < queries.size(); q++){
		auto [en, st] = queries[q];
		assert(en > st);
		int v = suff_pal[en];
		assert(v < V);
		for(int j = J-1; j >= 0; j--){
			while(len[jump[j][v]] > en-st) v = jump[j][v];
		}
		if(len[v] > en-st) v = par[v];
		int l = len[v];
		assert(l <= en-st);
		qloc[en-1].push_back({q, v, st + l});
	}
	vector<pair<int,int> > intervals(V);
	int T = 0;
	y_combinator([&](auto self, int v) -> void {
		intervals[v].first = T;
		T++;
		for(int w : ch[v]) self(w);
		intervals[v].second = T;
	})(1);
	atcoder::segtree<int, op, e> seg(T+1);
	// cerr << s << '\n';
	for(int i = 0; i <= N; i++){
		int v = suff_pal[i];
		// update v to i
		seg.set(intervals[v].first, i);
		for(auto [q, v, st] : qloc[i]){
			auto [l, r] = intervals[v];
			int loc = seg.prod(l, r);
			if(loc >= 0 && loc >= st){
				qans[q] = 0;
			}
		}
	}
	for(int q = 0; q < queries.size(); q++){
		auto [en, st] = queries[q];
		// cerr << en << ' ' << st << qans[q] << '\n';
	}
	return qans;
}
string chudanir_chud;
int lengta;
bool is_vowel(char ch)
{
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
	return false;
}

int b2d(string binary,int len, int i=0){
   if (i == len-1)
   return (binary[i] - '0');
   int temp=binary[i]-'0';
   temp=temp<<len-i-1;
   temp=temp+b2d(binary,len,i+1);
   return (temp);
}
int noo(string s)
{
	int cnt = 0;
	for(char ch : s) cnt += (ch == '1');
	return cnt;
}
int noz(string s)
{
	int cnt = 0;
	for(char ch : s) cnt += (ch == '0');
	return cnt;
}
void um(){
 int n;
 vector<array<int,3>> P;
   vector<int> a;
   cin >> n;
   for(int i=1,x;i<=n;++i) {
      cin >> x;a.push_back(x);
   }
   for(int i=0;i<30;++i) {
      vector<int> R,S;
      for(int j:a)
         if((j>>i)%2==1)
            R.push_back(j);
         else
            S.push_back(j);
      while(R.size()%3!=0) {
         if(S.size()<=2) {
            int i0=R[R.size()-1],i1=R[R.size()-2],i2=R[R.size()-3];
            R.pop_back();R.pop_back();R.pop_back();
            P.push_back({i0,i1,i2});
            int j0=i0^i1,j1=i1^i2,j2=i2^i0;
            S.push_back(j0);S.push_back(j2);S.push_back(j1);
            continue;  
         }
         int i0=R[R.size()-1],i1=S[S.size()-1],i2=S[S.size()-2];
         R.pop_back();S.pop_back();S.pop_back();
         P.push_back({i0,i1,i2});
         int j0=i0^i1,j1=i1^i2,j2=i2^i0;
         R.push_back(j0);R.push_back(j2);S.push_back(j1);
      }
      for(int i=0;i<(int)R.size()/3;++i) {
         int i0=R[i*3],i1=R[i*3+1],i2=R[i*3+2];
         int j0=i0^i1,j1=i1^i2,j2=i2^i0;
         P.push_back({i0,i1,i2});
         S.push_back(j0);S.push_back(j1);S.push_back(j2);
      }
      a.clear();R.clear();
      for(int j:S) a.push_back(j);
   }
   cout << P.size() << endl;
   for(auto i:P)
      cout << i[0] << ' ' << i[1] << ' ' << i[2] << endl;
}
main(){
	int t;
	cin>>t;
	while(t--)
	{
		um();
	}
}