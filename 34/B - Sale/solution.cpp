//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    int total =0;
    sort(a.begin(),a.end());
    for (int i=0;i<m;++i)
        if (a[i]<0)
            total += a[i];
    total -= 2*total;
    cout<<total;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}