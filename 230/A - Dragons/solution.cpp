//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int s,n;
    cin>>s>>n;
    bool ans = true;
    vector<pair<int,int>> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i].first>>a[i].second;
    sort(a.begin(),a.end());
    for (int i=0;i<n;++i) {
        if (s<=a[i].first) {
            ans = false;
            break;
        }
        else
            s += a[i].second;
    }
    if (ans)
        cout<<"YES";
    else
        cout<<"NO";
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}