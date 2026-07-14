//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    unordered_map<int,bool> m;
    for (int i=0;i<n;++i) {
        int x;
        cin>>x;
        m[x]=true;
    }
    int ans =0;
    for (int i=1;i<=3001;++i)
        if (m[i]==false) {
            ans = i;
            break;
        }
    cout<<ans;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}