//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,x,s;
    cin>>n>>s>>x;
    int total =0;
    for (int i=0;i<n;++i) {
        int a;
        cin>>a;
        total += a;
    }
    if (s>=total && (s-total)%x==0)
        cout<<"YES"<<'
';
    else
        cout<<"NO"<<'
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