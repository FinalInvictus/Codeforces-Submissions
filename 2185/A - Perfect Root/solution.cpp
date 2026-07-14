//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    for (int i=1;i<n+1;++i) {
        cout<<i;
        if (i<n)
            cout<<" ";
        if (i==n)
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
 
 