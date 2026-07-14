//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
void solve() {
    int a,b;
    cin>>a>>b;
    int total =a;
    while (a>0) {
        int d = floor(a/b);
        if (d>=1) {
            total += d;
            a = a/b+a%b;
        }
        else
            break;
    }
    cout<<total;
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}