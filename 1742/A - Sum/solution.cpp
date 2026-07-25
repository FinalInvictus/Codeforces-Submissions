//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const ll lim = 1000000000+1;
 
void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    bool check = false;
    if (max(a,max(b,c))==a)
        if (b+c==a)
            check = true;
    if (max(a,max(b,c))==b)
        if (a+c==b)
            check = true;
    if (max(a,max(b,c))==c)
        if (b+a==c)
            check = true;
    if (check)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<'
';
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}