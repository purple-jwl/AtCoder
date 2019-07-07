#include <bits/stdc++.h>

#define REP(i, x, n) for (int i = x; i < (int)(n); i++)
#define rep(i, n) REP(i, 0, n)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x.size())
#define popcount(x) __builtin_popcount(x)
#define popcountll(x) __builtin_popcountll(x)
#define uniq(x) x.erase(unique(x.begin(), x.end()), x.end())
#define F first
#define S second
#define mp make_pair
#define eb emplace_back
#define pii pair<int, int>
#define pll pair<ll, ll>

using namespace std;

typedef long long ll;

/* --- INFの値が適切か確認する --- */
// const int INF = 1 << 30;
// const ll INF = 1LL << 60;
// const int MOD = 1000000007;

int main() {
  string S, T;
  cin >> S >> T;
  vector<int> f(26, -1), t(26, -1);
  rep(i, S.size()) {
    int from = S[i] - 'a';
    int to = T[i] - 'a';
    if ((t[to] != -1 && t[to] != from) || (f[from] != -1 && f[from] != to)) {
      cout << "No" << endl;
      return 0;
    }
    f[from] = to;
    t[to] = from;
  }
  cout << "Yes" << endl;
}
