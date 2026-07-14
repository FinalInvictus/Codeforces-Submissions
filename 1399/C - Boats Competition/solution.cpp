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
    sort(a.begin(),a.end());
    int ans =0;
    for (int i=2;i<=2*n;++i) {
        int l = 0;
        int r = n-1;
        int count =0;
        while (l<r) {
            int sum = a[l]+a[r];
            if (sum==i) {
                count++;
                l++;
                r--;
            }
            else if (sum<i)
                l++;
            else
                r--;
        }
        ans = max(ans,count);
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