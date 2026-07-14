//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    ll k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    if (k>1)
        k = k%2 +2;
    while (k--) {
        int d = *max_element(a.begin(),a.end());
        for (int i=0;i<n;++i)
            a[i]= d-a[i];
    }
    for (int i=0;i<n;++i) {
        cout<<a[i];
        if (i<n-1)
            cout<<" ";
        if (i==n-1)
            cout<<'
';
    }
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