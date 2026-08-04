//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const ll lim = 1000000000+1;
 
void solve() {
    string s;
    getline(cin,s);
    set<char> a;
    for (int i=0;i<s.length();++i) {
        bool cond = s[i]>='a'&&s[i]<='z';
        if (cond)
            a.insert(s[i]);
    }
    cout<<a.size();
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t;
    // cin>>t;
    // while (t--)
        solve();
    return 0;
}