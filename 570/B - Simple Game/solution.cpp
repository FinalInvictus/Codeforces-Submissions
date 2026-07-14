//Author:CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
using ll= long long int;
 
void solve(){
    ll n,m;
    cin>>n>>m;
    ll a;
    if (abs(n-m)>m-1)
        a = m+1;
    else {
        if (n==m&&m==1)
            a = m;
        else if (abs(n-m)==m-1) {
            if (n%2==0)
                a = m+1;
            else
                a = m-1;
        }
        else
            a = m-1;
    }
    cout<<a;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}