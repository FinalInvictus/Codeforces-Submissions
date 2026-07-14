//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    unordered_map<int,int> m;
    ll total =0;
    for (int i=0;i<n;++i) {
        int a;
        cin>>a;
        a-=i;
        total +=m[a];
        m[a]++;
    }
    cout<<total<<'
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}