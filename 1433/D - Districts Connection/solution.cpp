//Author: CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    int x =NULL;
    vector<pair<int,int>> ans;
    for (int i=1;i<n;++i) {
        if (a[0]!=a[i]) {
            x = i;
            ans.push_back({1,i+1});
        }
    }
    for (int i=1;i<n;++i)
        if (a[0]==a[i]) {
            ans.push_back({x+1,i+1});
        }
    if (x==NULL)
        cout<<"NO"<<'
';
    else {
        cout<<"YES"<<'
';
        for (auto &i:ans) {
            cout<<i.first<<' '<<i.second<<'
';
        }
    }
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}