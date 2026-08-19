//Author: CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    int sum =0;
    for (int i=0;i<n;++i) {
        cin>>a[i];
        sum += a[i];
    }
    int ans =0;
    if (sum<k)
        ans = k-sum;
    else {
        sort(a.rbegin(),a.rend());
        int x =0;
        for (int i=0;i<n;++i) {
            if (x+a[i]<=k)
                x+=a[i];
            else
                break;
        }
        ans = k-x;
    }
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