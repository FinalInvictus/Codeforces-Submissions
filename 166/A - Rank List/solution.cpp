//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,t;
    cin>>n>>t;
    vector<pair<int,int>> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i].first>>a[i].second;
    sort(a.begin(),a.end(),[](auto &x,auto &y) {
        if (x.first!=y.first)
            return x.first>y.first;
        return x.second<y.second;
    });
    auto d = a[t-1];
    int count =0;
    for (auto &x:a)
        if (x==d)
            count++;
    cout<<count;
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}