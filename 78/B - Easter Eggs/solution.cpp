//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    string ans="VIBGYOR";
    ans.resize(n);
    for (int i=7;i<n;++i)
        ans[i] = ans[i-4];
    cout<<ans;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}