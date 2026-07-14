//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
void solve() {
    int n;
    cin>>n;
    unordered_map<string,int> m;
    for (int i=0;i<n;++i) {
        string s;
        cin>>s;
        m[s]++;
    }
    int maxi =0;
    string name;
    for (auto &pr:m) {
        maxi = max(maxi,pr.second);
        if (maxi == pr.second)
            name = pr.first;
    }
    cout<<name;
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}