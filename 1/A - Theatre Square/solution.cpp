//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n,m,a;
    cin>>n>>m>>a;
    ll p = (n+a-1)/a;
    ll q = (m+a-1)/a;
    cout<<abs(p*q);
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}