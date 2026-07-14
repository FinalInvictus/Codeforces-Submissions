//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    int total = ((n*y)+100-1)/100;
    int ans =0;
    if (total>x)
        ans = total -x;
    cout<<ans;
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}