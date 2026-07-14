//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> g(n+1);
    for (int i=0;i<m;++i) {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<bool> vis(n+1,false);
    bool ans = true;
    for (int i=1;i<=n;++i) {
        if (!vis[i]) {
            ll k=0;
            ll sum =0;
            stack<int> q;
            vis[i] = true;
            q.push(i);
            while (!q.empty()) {
                int u = q.top();
                q.pop();
                k++;
                sum += g[u].size();
                for (int v:g[u])
                    if (!vis[v]) {
                        vis[v] = true;
                        q.push(v);
                    }
            }
            if (sum != k*(k-1))
                ans = false;
        }
    }
    if (ans)
        cout<<"YES";
    else
        cout<<"NO";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}