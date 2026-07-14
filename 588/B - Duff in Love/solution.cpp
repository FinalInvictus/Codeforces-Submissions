//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    ll n;
    cin>>n;
    for (ll i=2;i*i<=n;++i) {
        while (n%(i*i)==0)
            n/=i;
    }
    cout<<n;
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}