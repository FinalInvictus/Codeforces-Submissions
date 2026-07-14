//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
int n,m;
vector<bool> cat(100000,false);
vector<vector<int>> g(100000);
 
void dfs(int u, int prev, int cc, int &ans) {
    if (cat[u])
        cc++;
    else
        cc=0;
    if (cc>m)
        return;
    bool end = true;
    for (int v:g[u]) {
        if (v==prev)
            continue;
        end = false;
        dfs(v,u,cc,ans);
    }
    if (end)
        ans++;
}
 
void solve(){
    cin>>n>>m;
    for (int i=0;i<n;++i) {
        int x;
        cin>>x;
        if (x==1)
            cat[i] = true;
    }
    for (int i=0;i<n-1;++i) {
        int u,v;
        cin>>u>>v;
        g[u-1].push_back(v-1);
        g[v-1].push_back(u-1);
    }
    int ans =0;
    dfs(0,0,0,ans);
    cout<<ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}