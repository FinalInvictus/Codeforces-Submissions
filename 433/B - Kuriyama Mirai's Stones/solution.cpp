//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n),b;
    for (int i=0;i<n;++i)
        cin>>a[i];
    b=a;
    sort(b.begin(),b.end());
    vector<ll> p(n+1,0),q(n+1,0);
    for (int i=0;i<n;++i) {
        p[i+1] = p[i] + a[i];
        q[i+1] = q[i] + b[i];
    }
    int k;
    cin>>k;
    while (k--) {
        int t,l,r;
        cin>>t>>l>>r;
        ll ans =0;
        if (t==1)
            ans = p[r]-p[l-1];
        else
            ans = q[r] - q[l-1];
        cout<<ans<<'
';
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}