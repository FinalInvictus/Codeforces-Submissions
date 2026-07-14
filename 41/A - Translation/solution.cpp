#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve() {
    string s;
    string t;
    cin>>s;
    cin>>t;
    bool ans;
    if (s.length()==t.length()) {
        for (int i=0;i<s.length();++i) {
            if (s[i]==t[t.length()-i-1])
                ans = true;
            else {
                ans = false;
                break;
            }
        }
    }
    else
        ans = false;
 
    if (ans)
        cout<<"YES";
    else
        cout<<"NO";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}