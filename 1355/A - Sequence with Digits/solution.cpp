//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    ll a,k;
    cin>>a>>k;
    ll sum = a;
    while (--k) {
        ll d = sum;
        int x = d%10;
        int y =d%10;
        while (d>0) {
            int z = d%10;
            x = min(x,z);
            y = max(y,z);
            d/=10;
        }
        if (x==0)break;
        sum += x*y;
    }
    cout<<sum<<'
';
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
}