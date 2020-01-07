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

/* --- INFやMODの値が適切か確認する --- */
// const int INF = 1 << 30;
// const ll INF = 1LL << 60;
// const ll MOD = 1000000007;

int main() {
  ll A, B;
  cin >> A >> B;

  map<ll, int> cnt;

  for (ll i = 2; i * i <= A; i++) {
    if (A % i == 0) {
      cnt[i]++;
      while (A % i == 0) A /= i;
    }
  }
  if (A != 1) cnt[A]++;

  for (ll i = 2; i * i <= B; i++) {
    if (B % i == 0) {
      cnt[i]++;
      while (B % i == 0) B /= i;
    }
  }
  if (B != 1) cnt[B]++;

  ll ans = 1;
  for (auto x : cnt) {
    if (x.S == 2) ans++;
  }

  cout << ans << endl;
}