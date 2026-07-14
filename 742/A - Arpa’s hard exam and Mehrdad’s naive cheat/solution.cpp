//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    int k = n%4;
    if (k==1)
        cout<<8;
    else if (k==2)
        cout<<4;
    else if (k==3)
        cout<<2;
    else if (n==0)
        cout<<1;
    else
        cout<<6;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
 
 