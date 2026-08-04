//Author: CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 1;
    for (int i=1;i<n;++i)
        if (s[i] != s[i-1])
            count++;
    int re = 0;
    for (int i=1;i<n-1;++i)
        if (s[i]!=s[i-1] && s[i]!=s[i+1]) {
            if (s[i-1]==s[i+1])
                re = max(re, 2);
            else
                re = max(re, 1);
        }
    int ans = count-re;
    cout<<ans<<'
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}