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
const int N = 1e5+2;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
	while(t--) {
		int x, n;
		cin >> x >> n;
		if(n & 1) cout << x << endl;
		else cout << 0 << endl;
	}

    return 0;
}