//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
const ll mod = 1e9+7;
 
bool isPrime(ll n) {
    for (ll i=2;i*i<=n;++i)
        if (n%i==0)
            return false;
    return true;
}
bool SqrtCheck(ll n) {
    ll a = sqrt(n);
    if (a*a==n)
        return true;
    else
        return false;
}
 
 
void solve() {
    int n;
    cin>>n;
    for (int i=0;i<n;++i) {
        ll x;
        cin>>x;
        if (x>1) {
            if (SqrtCheck(x)) {
                ll y = sqrt(x);
                if (isPrime(y))
                    cout<<"YES"<<'
';
                else
                    cout<<"NO"<<'
';
            }
            else
                cout<<"NO"<<'
';
        }
        else
            cout<<"NO"<<'
';
 
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}