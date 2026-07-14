//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,k,p;
    cin>>n>>k>>p;
    int ans = (abs(k)+p-1)/p;
    if (ans>n)
        cout<<-1<<'
';
    else
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