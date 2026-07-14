//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int x = ((n+m-1)/m)*b;
    int y = (n/m)*b +(n%m)*a;
    int z = n*a;
    int ans = min(x,y);
    ans = min(ans,z);
    cout<<ans;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}