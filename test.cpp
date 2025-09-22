#include <bits/stdc++.h>
using namespace std;
#define ll long long

int calculator(const string &s){
    stack<int> prev;
    stack<char> op;
    int res = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == ' ') continue;

        if(s[i] == '('){
            prev.push(res);
            if(!op.empty()){
                prev.push(op.top());
                op.pop();
            } 
            else{
                prev.push('+');
            }
            res = 0;
        }
        else if(s[i] == ')'){
            char c = (char)prev.top(); prev.pop();
            int v = prev.top(); prev.pop();

            if(c == '+') res = v + res;
            else if(c == '-') res = v - res;
        }
        else if(s[i] == '+' || s[i] == '-') op.push(s[i]);
        else{
            int num = 0;
            while(i < s.size() && isdigit(s[i])){
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;

            if(op.empty()){
                res = num;
            }
            else{
                char c = op.top(); op.pop();
                if(c == '+') res += num;
                else if(c == '-') res -= num;
            }
        }
        
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        cout << calculator(s) << endl;
    }
    return 0;
}