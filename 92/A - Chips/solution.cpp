//Author: CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n,m;
    cin>>n>>m;
    int x = n*(n+1)/2;
    m %=x;
    for (int i=1;i<=n;++i) {
        if (i>m)
            break;
        m -=i;
    }
    cout<<m;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t;
    // cin >> t;
    // while (t--)
        solve();
    return 0;
}