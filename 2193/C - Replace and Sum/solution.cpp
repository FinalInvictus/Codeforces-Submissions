//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,q;
    cin>>n>>q;
    vector<ll> a(n+2),b(n+2),d(n+2);
    for (int i=1;i<=n;++i)
        cin>>a[i];
    for (int i=1;i<=n;++i)
        cin>>b[i];
    for (int i=1;i<=n;++i)
        d[i] = max(a[i],b[i]);
    vector<ll> nMax(n+3,0);
    vector<ll> pMax(n+2,0);
    for (int i=n;i>=1;--i)
        nMax[i] = max(nMax[i+1],d[i]);
    for (int i=1;i<=n;++i)
        pMax[i] = pMax[i-1]+nMax[i];
    while (q--) {
        int l,r;
        cin>>l>>r;
        cout<<pMax[r]-pMax[l-1]<<" ";
    }
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