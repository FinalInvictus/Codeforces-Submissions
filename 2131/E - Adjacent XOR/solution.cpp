//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    bool run = true;
    vector<ll> a(n),b(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    for (int i=0;i<n;++i)
        cin>>b[i];
    for (int i=0;i<n-1;++i) {
        if (a[i]!=b[i]) {
            ll c = a[i]^a[i+1];
            ll d = a[i]^b[i+1];
            if (c==b[i])
                a[i]=c;
            else if (d==b[i])
                a[i]=d;
            else
                continue;
        }
    }
    for (int i=0;i<n;++i) {
        if (a[i]!=b[i]) {
            run = false;
            break;
        }
    }
    if (run)
        cout<<"YES"<<'
';
    else
        cout<<"NO"<<'
';
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}
 
 