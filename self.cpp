//#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
// 
//#define ll long long
//#define ull unsigned ll
//#define uint unsigned int
//#define vs vector<string>
//#define vi vector<int>
//#define vvi vector<vi>
//#define vvvi vector<vvi>
//#define vvvvi vector<vvvi>
//#define vvvvvi vector<vvvvi>
//#define vll vector<ll>
//#define vvll vector<vll>
//#define vvvll vector<vvll>
//#define pii pair<int,int>
//#define vpii vector<pii>
//#define vvpii vector<vpii>
//#define vvvpii vector<vvpii>
//#define pllll pair<ll,ll>
//#define vpllll vector<pllll>
//#define vvpllll vector<vpllll>
//#define vvvpllll vector<vvpllll>
// 
//#define FOR(i, l, r) for(int i = (l); i < (r); i++)
//#define F first
//#define S second
//#define pb push_back
//#define mp make_pair
//#define all(x) (x).begin(), (x).end()
//#define din(type, ...) DELIGATE(COUNT(__VA_ARGS__))(type, __VA_ARGS__)
// 
//#define DELIGATE(n) CATENATE(n)
//#define CATENATE(n) DIN ## n
//#define COUNT(...) VALUES(__VA_ARGS__, 5, 4, 3, 2, 1)
//#define VALUES(n1, n2, n3, n4, n5, n, ...) n
//#define DIN1(type, name) type name; cin >> name;
//#define DIN2(type, name, ...) type name; cin >> name; DIN1(type, __VA_ARGS__)
//#define DIN3(type, name, ...) type name; cin >> name; DIN2(type, __VA_ARGS__)
//#define DIN4(type, name, ...) type name; cin >> name; DIN3(type, __VA_ARGS__)
//#define DIN5(type, name, ...) type name; cin >> name; DIN4(type, __VA_ARGS__)
// 
//#define count_leading_zeros __builtin_clz
//#define count_leading_zeros_ll __builtin_clzll
//#define count_trailing_zeros __builtin_ctz
//#define count_trailing_zeros_ll __builtin_ctzll
//#define count_ones __builtin_popcountll
// 
//using namespace std;
// 
//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
// 
//template<typename T, typename C> istream& operator>>(istream& is, pair<T, C> &p){is >> p.first >> p.second       ; return is;}
//template<typename T, typename C> ostream& operator<<(ostream& os, pair<T, C>  p){os << p.first << " " << p.second; return os;}
//template<typename T> istream& operator>>(istream& is, vector<T> &v){for (auto& i : v) is >> i;        return is;}
//template<typename T> ostream& operator<<(ostream& os, vector<T>  v){for (auto& i : v) os << i << ' '; return os;}
//template<typename T> istream& operator>>(istream& is, deque<T> &d){for (auto& i : d) is >> i;        return is;}
//template<typename T> ostream& operator<<(ostream& os, deque<T>  d){for (auto& i : d) os << i << ' '; return os;}
// 
//const ll kMod = 1000003;
//const ll kMax = 1e9;
//const ll kMin = -1e9;
// 
//struct cmp {
//  bool operator()(const pllll& lhs, const pllll& rhs) const {
//    return lhs.first == rhs.first && lhs.second == rhs.second;
//  }
//};
// 
//constexpr int n = 120;
// 
//int main() {
//  ios::sync_with_stdio(false);
//  cin.tie(nullptr);
// 
//#ifdef LOCAL
//  freopen("input.txt", "r", stdin);
//  // freopen("output.txt", "w", stdout);
