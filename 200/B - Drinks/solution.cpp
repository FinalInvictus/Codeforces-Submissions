//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin>>n;
    float sum =0;
    for (int i=0;i<n;++i) {
        int a;
        cin>>a;
        sum +=a;
    }
    float total = sum/(100*n);
    cout<<total*100;
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
 
}