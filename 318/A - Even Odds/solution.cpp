//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    ll n,k;
    cin>>n>>k;
    if (n%2!=0) {
        if (k<=(n+1)/2)
            k = 1 + (k-1)*2;
        else
            k = 2 + (k-1-((n+1)/2))*2;
    }
    else {
        if (k<=n/2)
            k = 1 + (k-1)*2;
        else
            k = 2 + ((k-(n/2))-1)*2;
    }
    cout<<k;
 
 
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}