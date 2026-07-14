//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    ll n;
    cin>>n;
    if (n%2!=0)
        n = -(n+1)/2;
    else
        n= n/2;
    cout<<n;
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
 
}