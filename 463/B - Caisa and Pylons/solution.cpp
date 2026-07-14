//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    int ans =0;
    for (int i=0;i<n;++i) {
        int x;
        cin>>x;
        if (x>ans)
            ans = x;
    }
    cout<<ans;
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}