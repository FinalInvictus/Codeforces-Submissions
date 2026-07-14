//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<max({a+b+c,a*b*c,a*(b+c),(a+b)*c});
 
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}