//Author: CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n),b;
    for (int i=0;i<n;++i)
        cin>>a[i];
    b = a;
    sort(b.begin(),b.end());
    bool sort = true;
    for (int i=0;i<n;++i)
        if (a[i]!=b[i]) {
            sort = false;
            break;
        }
    if (!sort) {
        if (k>1)
            sort = true;
    }
    if (sort)
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
    cin >> t;
    while (t--)
        solve();
    return 0;
}