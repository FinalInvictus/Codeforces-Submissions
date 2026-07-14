//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve(){
    ll a,b;
    cin>>a>>b;
    ll d = lcm(a,b);
    ll x = d/a;
    ll y = d/b;
    if (abs(x-y)>1) {
        if (x>y)
            cout<<"Dasha";
        else
            cout<<"Masha";
    }
    else
        cout<<"Equal";
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}