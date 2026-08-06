//Author: CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for (int i=0;i<n;++i) {
        cin>>a[i].first;
        a[i].second = i;
    }
    vector<pair<int,int>> b(n);
    for (int i=0;i<n;++i) {
        cin>>b[i].first;
        b[i].second = i;
    }
    vector<pair<int,int>> c(n);
    for (int i=0;i<n;++i) {
        cin>>c[i].first;
        c[i].second = i;
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());
    int ans =0;
    for (int i=0;i<3;++i) {
        int x = a[i].first;
        int p = a[i].second;
        for (int j=0;j<3;++j) {
            int y = b[j].first;
            int q = b[j].second;
            for (int k=0;k<3;++k) {
                int z = c[k].first;
                int r = c[k].second;
                if (p!=q && p!=r && q!=r) {
                    ans = max(ans,x+y+z);
                }
            }
        }
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