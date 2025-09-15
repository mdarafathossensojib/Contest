#include <bits/stdc++.h>
using namespace std;
#define mkp make_pair
#define mems(a, x) memset((a), (x), sizeof(a))

typedef long long ll;
typedef pair<int, int> pii;

// int t, n, m, k, x, y, arr[100005];
const int modulo = 998244353;
const int MAX = 6005;
const ll invrs = 499122177;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;

        ll ans = -1, s1 = a + b;
        if (s1 % 2 == 0) ans = max(ans, s1);

        __int128 big = (__int128)a * b + 1; // avoid overflow
        if (big % 2 == 0) {
            ll val = (ll)big;
            ans = max(ans, val);
        }

        cout << ans << endl;
    }
    return 0;
}