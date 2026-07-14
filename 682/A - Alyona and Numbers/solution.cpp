//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,m;
    cin>>n>>m;
    ll c1[5],c2[5];
    for (int i=0;i<5;++i) {
        if (i==0) {
            c1[i]=n/5;
            c2[i]=m/5;
        }
        else {
            c1[i]= (n-i+5)/5;
            c2[i]= (m-i+5)/5;
        }
    }
    ll count = c1[0]*c2[0];
    for (int i=1;i<5;++i)
        count += c1[i]*c2[5-i];
 
 
    cout<<count;
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 
 