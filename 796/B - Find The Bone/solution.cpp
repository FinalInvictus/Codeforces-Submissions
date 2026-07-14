//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<bool> hole(n,false);
    for (int i=0;i<m;++i) {
        int u;
        cin>>u;
        hole[u]=true;
    }
    int pos =1;
    for (int i=0;i<k;++i) {
        int u,v;
        cin>>u>>v;
        if (pos==u)
            pos=v;
        else if (pos==v)
            pos=u;
        if (hole[1]) {
            pos =1;
            break;
        }
        else if (hole[pos])
            break;
    }
    cout<<pos;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}