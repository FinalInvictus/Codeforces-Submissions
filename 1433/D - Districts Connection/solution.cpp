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
    unordered_set<int> c;
    vector<pair<int,int>> ans;
    int ref = a[0];
    int index = 0;
    for (int i=1;i<n;++i) {
        c.insert(a[i]);
        if (a[i] != ref) {
            ans.push_back({1,i+1});
            index = i+1;
        }
    }
    for (int i=1;i<n;++i) {
        if (a[i]==ref) {
            ans.push_back({index,i+1});
        }
    }
    if (index==0)
        cout<<"NO"<<'
';
    else {
        cout<<"YES"<<'
';
        for (auto &x:ans) {
            cout<<x.first<<' '<<x.second<<'
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