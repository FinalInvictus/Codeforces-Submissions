//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    ll x;
    cin>>x;
    vector<ll> a;
    while (x>0) {
        ll b = x%10;
        if (b>9-b)
            a.push_back(9-b);
        else
            a.push_back(b);
        x/=10;
    }
    for (int i=a.size()-1;i>=0;--i) {
        if (i==a.size()-1) {
            if (a[i]==0)
                cout<<a[i]+9;
            else
                cout<<a[i];
        }
        else
            cout<<a[i];
 
    }
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
 
 