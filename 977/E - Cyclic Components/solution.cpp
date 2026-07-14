//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
bool check = true;
vector<vector<int>> g(200001);
vector<bool> vis(200001,false);
 
void dfs(int u) {
    vis[u] = true;
    if (g[u].size()!=2)
        check = false;
    for (int v:g[u])
        if (!vis[v])
            dfs(v);
}
 
void solve() {
    int n,m;
    cin>>n>>m;
    for (int i=0;i<m;++i) {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int comp =0;
    for (int i=1;i<=n;++i) {
        if (!vis[i]) {
            check = true;
            dfs(i);
            if (check)
                comp++;
        }
    }
    cout<<comp;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}