//Author: CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    sort(a.begin(),a.end());
    ll ans =0;
    if (n%2==0) {
        for (int i=0;i<n;i+=2)
            ans = max(ans,a[i+1]-a[i]);
    }
    else {
        ans = LLONG_MAX;
        for (int i=0;i<n;++i) {
            ll x = 0;
            vector<ll> p;
            for (int j=0;j<n;++j)
                if (i!=j)
                    p.push_back(a[j]);
            for (int j=0;j<p.size();j+=2)
                x= max(x,p[j+1]-p[j]);
            ans = min(x,ans);
        }
    }
    if (n==1)
        ans = 1;
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