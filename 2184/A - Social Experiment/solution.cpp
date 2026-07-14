//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin>>n;
    if (n==2)
        cout<<2<<'
';
    else if (n==3)
        cout<<3<<'
';
    else {
        if (n%2==0)
            cout<<0<<'
';
        else
            cout<<1<<'
';
    }
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
}