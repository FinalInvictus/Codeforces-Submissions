//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,k;
    cin>>n>>k;
    int ans =n;
    for (int i=1;i*i<=n;++i) {
        if (n%i==0) {
            int a = i;
            int b = n/i;
            if (a<=k)
                ans = min(ans,b);
            if (b<=k)
                ans = min(ans,a);
        }
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