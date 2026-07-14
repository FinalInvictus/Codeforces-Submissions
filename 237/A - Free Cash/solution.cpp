//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    map<pair<int,int>,int> m;
    for (int i=0;i<n;++i) {
        int a,b;
        cin>>a>>b;
        m[{a,b}]++;
    }
    int maxi =0;
    for (auto &pr:m)
        maxi = max(maxi,pr.second);
    cout<<maxi;
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 
 