//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,t;
    cin>>n>>t;
    vector<int> a(n);
    for (int i=1;i<n;++i)
        cin>>a[i];
    bool ans = false;
    int pos =1;
    while (pos<=t) {
        if (pos==t) {
            ans = true;
            break;
        }
        pos += a[pos];
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