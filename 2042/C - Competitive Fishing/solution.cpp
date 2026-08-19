//Author: CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    ll k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> x;
    int a =0;
    for (int i=n-1;i>=1;--i) {
        if (s[i]=='1')
            a++;
        else
            a--;
        if (a>0)
            x.push_back(a);
    }
    sort(x.rbegin(),x.rend());
    ll sum =0;
    int ans = -1;
    for (int i=0;i<x.size();++i) {
        sum += x[i];
        if (sum>=k) {
            ans = i+2;
            break;
        }
    }
    cout<<ans<<'
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