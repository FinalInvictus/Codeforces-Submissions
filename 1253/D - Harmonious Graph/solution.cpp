//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
int n,m;
vector<vector<int>> adj(200001);
vector<bool> vis(200001,false);
vector<pair<int,int>> sets;
 
void dfs(int u,int &l,int &r) {
    vis[u] = true;
    l = min(l,u);
    r = max(r,u);
    for (auto &v:adj[u])
        if (!vis[v])
            dfs(v,l,r);
}
 
void solve() {
    cin>>n>>m;
    for (int i=0;i<m;++i) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i=1;i<=n;++i) {
        if (!vis[i]) {
            int l =i;
            int r =i;
            dfs(i,l,r);
            sets.push_back({l,r});
        }
    }
    int ans =0;
    int end = INT_MIN;
    for (auto &a:sets) {
        if (a.first<=end)
            ans++;
        end = max(end,a.second);
    }
    cout<<ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}