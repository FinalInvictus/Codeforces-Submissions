//Author:CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
using ll= long long int;
 
void solve(){
    int n,m;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    sort(a.begin(),a.end());
    cin>>m;
    while (m--) {
        int x;
        cin>>x;
        int ans = upper_bound(a.begin(),a.end(),x)-a.begin();
        if (ans!=-1)
            cout<<ans<<'
';
        else
            cout<<0<<'
';
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}