//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<ll> a(n+1);
    for (int i=1;i<=n;++i)
        cin>>a[i];
    vector<vector<int>> g(n+1);
    for (int i=0;i<m;++i) {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ll cost =0;
    vector<bool> vis(n+1,false);
    for (int i=1;i<=n;++i) {
        if (!vis[i]) {
            vis[i] = true;
            ll x = a[i];
            stack<int> s;
            s.push(i);
            while (!s.empty()) {
                int u = s.top();
                s.pop();
                for (int v:g[u])
                    if (!vis[v]) {
                        vis[v] = true;
                        x = min(x,a[v]);
                        s.push(v);
                    }
            }
            cost += x;
        }
    }
    cout<<cost;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}