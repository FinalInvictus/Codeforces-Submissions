//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> a(m);
    for (int i=0;i<m;++i)
        cin>>a[i].second>>a[i].first;
    sort(a.rbegin(),a.rend());
    int count =0;
    for (int i=0;i<m;++i) {
        if (n>=a[i].second) {
            count += a[i].first*a[i].second;
            n-=a[i].second;
        }
        else {
            count += n*a[i].first;
            break;
        }
    }
    cout<<count;
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}