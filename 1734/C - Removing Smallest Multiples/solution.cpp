//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> cost(n+1,0);
    for (int i=1;i<n+1;++i)
        for (int j=i;j<n+1;j+=i) {
            if (s[j-1]=='1')
                break;
            if (cost[j]==0)
                cost[j]=i;
        }
    ll ans =0;
    for (int i=1;i<n+1;++i)
        if (s[i-1]=='0')
            ans += cost[i];
    cout<<ans<<'
';
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}