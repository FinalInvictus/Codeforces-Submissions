//Author:CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
using ll= long long int;
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    sort(a.begin(),a.end());
    while (m--) {
        int x;
        cin>>x;
        int count = upper_bound(a.begin(),a.end(),x)-a.begin();
        cout<<count<<' ';
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}