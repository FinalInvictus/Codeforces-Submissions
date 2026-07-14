//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
const ll mod = 1e9+7;
 
void solve() {
    int n;
    cin>>n;
    ll g=0;
    for (int i=0;i<n;++i) {
        ll x;
        cin>>x;
        g = gcd(g,x);
    }
    int ans=0;
    for (ll i=1;i*i<=g;++i) {
        if (g%i==0) {
            ans++;
            if (i!=g/i)
                ans++;
        }
    }
    cout<<ans;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}