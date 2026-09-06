//Author: CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
void solve() {
    int x,y,k;
    cin>>x>>y>>k;
    k = min(x,y);
    cout<<0<<' '<<0<<' '<<k<<' '<<k<<'
';
    cout<<0<<' '<<k<<' '<<k<<' '<<0<<'
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