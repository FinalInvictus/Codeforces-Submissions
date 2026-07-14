//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,m;
    cin>>n;
    vector<int> a(n+1);
    for (int i=0;i<n;++i) {
        int x;
        cin>>x;
        a[x] =i;
    }
    ll c1=0;
    ll c2=0;
    cin>>m;
    while (m--) {
        int b;
        cin>>b;
        c1 += a[b]+1;
        c2 += n-a[b];
    }
    cout<<c1<<" "<<c2;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 
 