//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    ll n;
    cin>>n;
    if (n>2) {
        ll m =0;
        ll k =0;
        if (n%2==0) {
            n /=2;
            ll s = n*n;
            m = s-1;
            k = s+1;
        }
        else {
            k = ((n*n)+1)/2;
            m = n*n - k;
        }
        cout<<m<<" "<<k;
    }
    else
        cout<<-1;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}