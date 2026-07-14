//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<pair<double,int>> a(n);
    for (int i=0;i<n;++i) {
        cin>>a[i].first;
        a[i].first = (a[i].first+m-1)/m;
        a[i].second = i+1;
    }
    int maxi =0;
    int imax =0;
    for (int i=0;i<n;++i) {
        if (a[i].first>=maxi) {
            maxi = a[i].first;
            imax = a[i].second;
        }
    }
    cout<<imax;
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}