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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i = 0; i < n; ++i) cin >> p[i];
        
        vector<int> r0, r1, r2;
        for (int i = 1; i <= n; i++) {
            int rem = i % 3;
            if (rem == 0) {
                r0.push_back(i);
            } else if (rem == 1) {
                r1.push_back(i);
            } else {
                r2.push_back(i);
            }
        }

        vector<int> q(n);
        int idx0 = 0, idx1 = 0, idx2 = 0;
        for (int i = 0; i < n; i++) {
            int required_rem = (3 - (p[i] % 3)) % 3;
            if (required_rem == 0) {
                q[i] = r0[idx0++];
            } else if (required_rem == 1) {
                q[i] = r1[idx1++];
            } else {
                q[i] = r2[idx2++];
            }
        }

        for (int i = 0; i < n; i++) {
            cout << q[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
