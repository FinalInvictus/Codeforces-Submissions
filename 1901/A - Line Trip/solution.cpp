//Author: CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    int ans =a[0];
    for (int i=0;i<n-1;++i) {
        ans = max(ans,a[i+1]-a[i]);
    }
    ans = max(ans,2*(x-a[n-1]));
    cout<<ans<<'
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}