#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> g(n+1);
    while (m--) {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<bool> vis(n+1,false);
    int comp =0;
    for (int i=1;i<=n;++i) {
        if (!vis[i]) {
            comp++;
            stack<int> s;
            s.push(i);
            vis[i] = true;
            while (!s.empty()) {
                int u = s.top();
                s.pop();
                for (int v:g[u])
                    if (!vis[v]) {
                        s.push(v);
                        vis[v] = true;
                    }
            }
        }
    }
    ll ans =1;
    for (int i=0;i<n-comp;++i)
        ans *=2;
    cout<<ans;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}