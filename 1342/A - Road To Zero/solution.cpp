//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
void solve() {
    ll x,y,a,b;
    cin>>x>>y;
    cin>>a>>b;
    ll mini = min(x,y);
    ll maxi = max(x,y);
    ll cost;
    if (2*a<b)
        cost = (x+y)*a;
    else
        cost = (mini)*b+(maxi-mini)*a;
    cout<<cost<<'
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