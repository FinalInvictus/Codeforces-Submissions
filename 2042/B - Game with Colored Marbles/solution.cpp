//Author: CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n+1,0);
    for (int i=0;i<n;++i) {
        int x;
        cin>>x;
        a[x]++;
    }
    int x =0;
    int y =0;
    for (int i=0;i<n+1;++i) {
        if (a[i]==1)
            x++;
        else if (a[i]>1)
            y++;
    }
    x = (x+1)/2;
    int total = 2*x + y;
    cout<<total<<'
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}