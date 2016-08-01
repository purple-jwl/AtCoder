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

const int INF = 1 << 29;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> d(k);
    rep (i, k) cin >> d[i];

    REP (i, n, INF) {
        string s = to_string(i);
        bool flg = true;
        rep (j, sz(s)) rep (l, sz(d)) {
            if (s[j] - '0' == d[l]) {
                flg = false;
            }
        }
        if (flg) {
            cout << i << endl;
            return 0;
        }
    }
}