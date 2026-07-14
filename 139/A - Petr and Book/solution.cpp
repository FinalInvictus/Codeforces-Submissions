//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    int a[7];
    int total =0;
    for (int i=0;i<7;++i) {
        cin>>a[i];
        total += a[i];
        if (total>=n) {
            cout<<i+1;
            break;
        }
    }
    int k = (n+total-1)/total -1;
    while (k--) {
        for (int i=0;i<7;++i) {
            total += a[i];
            if (total>=n) {
                cout<<i+1;
                break;
            }
        }
        if (total>=n)
            break;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
 
 