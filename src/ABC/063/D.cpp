#include <bits/stdc++.h>

#define REP(i, x, n) for (int i = x; i < (int)(n); i++)
#define rep(i, n) REP (i, 0, n)
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

using namespace std;

typedef long long ll;

// const int INF = 1 << 31;
// const ll INF = 1LL << 60;
// const int MOD = 1000000007;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  vector<int> h(N);
  rep (i, N) cin >> h[i];

  ll lb = 1;
  ll ub = 1e9 + 5;

  while (lb < ub) {
    ll mid = (lb + ub) / 2;

    ll aCnt = 0;
    rep (i, N) {
      ll hp = h[i] - mid * B;
      if (hp > 0) aCnt += hp / (A - B) + (hp % (A - B) ? 1 : 0);
    }

    if (aCnt > mid) lb = mid + 1;
    else ub = mid;
  }

  cout << lb << endl;
}
