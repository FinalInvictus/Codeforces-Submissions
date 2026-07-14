//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n);
    ll total =0;
    for (int i=0;i<n;++i) {
        cin>>a[i];
        total += a[i]/x;
    }
    ll ans =0;
    for (int i=0;i<n;++i) {
        ll u = total - (a[i]/x);
        ll cur = a[i]+ (u*y);
        ans = max(ans,cur);
    }
    cout<<ans<<'
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