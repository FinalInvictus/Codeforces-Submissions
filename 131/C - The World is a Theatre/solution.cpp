//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
ll c(int n, int r) {
    ll total =1;
    for (int i=1;i<=r;++i)
        total = (total*(n-r+i))/i;
    return total;
}
 
void solve() {
    int b,g,t;
    cin>>b>>g>>t;
    ll total =0;
    for (int i=4;i<=min(b,t-1);++i)
        total += c(b,i)*c(g,t-i);
    cout<<total;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}