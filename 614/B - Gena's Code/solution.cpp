//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
bool check(string s) {
    if (s[0]!='1')
        return false;
    for (int i=1;i<s.length();++i)
        if (s[i]!='0')
            return false;
    return true;
}
 
void solve() {
    int n;
    cin>>n;
    string ans="1";
    int zeros =0;
    for (int i=0;i<n;++i) {
        string s;
        cin>>s;
        if (check(s))
            zeros += s.length()-1;
        else {
            if (s[0]=='0') {
                ans = "0";
                zeros = 0;
                break;
            }
            else
                ans = s;
        }
    }
    cout<<ans;
    while (zeros--)
        cout<<0;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}