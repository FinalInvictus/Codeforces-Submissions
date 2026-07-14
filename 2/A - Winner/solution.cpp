//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    unordered_map<string,int> m;
    vector<pair<string,int>> list(n);
    for (int i=0;i<n;++i) {
        cin>>list[i].first>>list[i].second;
        m[list[i].first] += list[i].second;
    }
    int max =INT_MIN;
    for (auto &i:m)
        if (i.second>=max)
            max = i.second;
    unordered_map<string,int> c;
    string ans;
    for (auto &i:list) {
        c[i.first] += i.second;
        if (c[i.first]>=max&&m[i.first]==max) {
            ans = i.first;
            break;
        }
    }
    cout<<ans;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}