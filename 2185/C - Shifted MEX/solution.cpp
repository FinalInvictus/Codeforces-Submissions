//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    int ans =0;
    for (int i=0;i<n;++i) {
        ll x = -a[i];
        vector<bool> b(n+2,false);
        for (int j=0;j<n;++j) {
            ll y = x+a[j];
            if (y>=0&&y<=n)
                b[y]=true;
        }
        int mex =0;
        while (b[mex])
            mex++;
        ans = max(ans,mex);
    }
    cout<<ans<<'
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}
 
 