//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
void solve() {
    ll n;
    cin>>n;
    ll k = (n-1)/2;
    ll ans = (k*(k+1)*(2*k+1)/3)*4;
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