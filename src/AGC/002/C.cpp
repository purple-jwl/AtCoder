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
    string ans[] = {"Possible", "Impossible"};

    int N, L;
    int a[100000];

    cin >> N >> L;
    rep (i, N) cin >> a[i];

    int idx = -1;
    rep (i, N - 1) {
        if (a[i] + a[i + 1] >= L) {
            idx = i + 1;
            break;
        }
    }

    if (idx == -1) cout << ans[1] << endl;
    else {
        cout << ans[0] << endl;
        for (int i = 1; i < idx; i++) {
            cout << i << endl;
        }
        for (int i = N - 1; i > idx; i--) {
            cout << i << endl;
        }
        cout << idx << endl;
    }
}
