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

string get_sub_str(const string &s, int l, int r){
    return s.substr(l, r-l+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    int n = a.size(), m = b.size(), ans = 0;
    for(int i=0; i + m - 1 < n; ++i){
        if(get_sub_str(a, i, i + m - 1) == b) ans++;
    }
    cout << ans << endl;

    return 0;
}