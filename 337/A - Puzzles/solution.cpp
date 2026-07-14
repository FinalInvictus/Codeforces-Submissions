//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    for (int i=0;i<m;++i)
        cin>>a[i];
    sort(a.begin(), a.end());
    int diff =a[n-1]-a[0];
    for (int i=0;i<m;++i) {
        if (i<m-n+1) {
            int z = a[n+i-1]-a[i];
            diff = min(diff,z);
        }
    }
    cout<<diff;
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}