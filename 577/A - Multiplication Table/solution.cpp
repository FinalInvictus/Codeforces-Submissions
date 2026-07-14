//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    ll n,x;
    cin>>n>>x;
    ll count =0;
    for (ll i=0;i<n;++i)
        if (x<=(i+1)*n&&x%(i+1)==0)
            count++;
    cout<<count;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
 
 