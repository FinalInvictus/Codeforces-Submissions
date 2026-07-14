//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    vector<char> m;
    string n;
    vector<char> x;
    for (int i=0;i<8;++i) {
        string s;
        cin>>s;
        for (int j=0;j<s.length();++j) {
            if (s[j]!='.')
                x.push_back(s[j]);
        }
    }
    for (char &y:x)
        cout<<y;
    cout<<'
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}