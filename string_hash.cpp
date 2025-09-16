#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int p1 = 131, mod1 = 127657753, p2 = 137, mod2 = 987654319;
const int N = 1e5 + 5;
int pw1[N], pw2[N];

void prec(){
    pw1[0] = pw2[0] = 1;
    for(int i=1; i<N; ++i){
        pw1[i] = 1LL * pw1[i-1] * p1 % mod1;
        pw2[i] = 1LL * pw2[i-1] * p2 % mod2;
    }
}

pair<int,int> get_hash(const string &s){
    int h1 = 0, h2 = 0, n = s.size();
    for(int i=0; i<n; ++i){
        h1 += 1LL * s[i] * pw1[i] % mod1;
        h1 %= mod1;
        h2 += 1LL * s[i] * pw2[i] % mod2;
        h2 %= mod2;
    }
    return {h1, h2};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    prec();

    string s1, s2;
    cin >> s1 >> s2;

    if(get_hash(s1) == get_hash(s2)){
        cout << "YES\n";
    }
    else cout << "NO\n";
    
    return 0;
}