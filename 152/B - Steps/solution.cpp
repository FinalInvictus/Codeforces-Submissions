//Author:CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
using ll= long long int;
ll n,m;
 
ll find(ll x,ll y, ll a, ll b) {
    ll ans = INT_MAX;
    if (a>0)
        ans = (n-x)/a;
    if (a<0)
        ans = (x-1)/-a;
    if (b>0)
        ans = min(ans,(m-y)/b);
    if (b<0)
        ans = min(ans,(y-1)/-b);
    return ans;
}
 
void solve(){
    cin>>n>>m;
    ll x,y;
    cin>>x>>y;
    int k;
    cin>>k;
    ll count =0;
    while (k--) {
        ll a,b;
        cin>>a>>b;
        ll ans =find(x,y,a,b);
        count += ans;
        x += ans*a;
        y += ans*b;
    }
    cout<<count;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}