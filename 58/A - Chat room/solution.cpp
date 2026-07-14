//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    string s;
    cin>>s;
    string t = "hello";
    int tt =0;
    int m =0;
    for (int i=0;i<s.length();++i) {
        if (s[i]==t[tt]) {
            tt++;
            m++;
        }
        if (m==5)
            break;
    }
    if (m==5)
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