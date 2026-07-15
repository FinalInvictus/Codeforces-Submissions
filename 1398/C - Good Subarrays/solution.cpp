//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const ll lim = 1000000000+1;
 
void solve() {
    int n;
    cin>>n;
    vector<ll> a(n),p(n);
    for (int i=0;i<n;++i) {
        char c;
        cin>>c;
        a[i] = c-'0';
    }
    ll pref =0;
    unordered_map<ll,ll> m;
    m[0]++;
    for (int i=0;i<n;++i) {
        pref += a[i];
        m[pref - (i+1)]++;
    }
    ll ans =0;
    for (auto [x,y]:m) {
        ans += y*(y-1)/2;
    }
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