//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    sort(a.begin(),a.end());
    ll total =0;
    for (int i=0;i<n;++i) {
        total += (ll)a[i]*x;
        if (x>1)
            x-=1;
    }
    cout<<total;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}