//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    vector<int> m(n+1);
    vector<vector<int>> g(n+1);
    for (int i=1;i<=n;++i) {
        cin>>m[i];
        if (m[i]!=-1)
            g[m[i]].push_back(i);
    }
    vector<int> l(n+1,0);
    queue<int> q;
    for (int u:m) {
        if (m[u]==-1) {
            l[u]=1;
            q.push(u);
        }
    }
    int ans =1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        ans = max(ans,l[v]);
        for (int u:g[v]) {
            if (l[u]==0) {
                l[u]=l[v]+1;
                q.push(u);
            }
        }
    }
    cout<<ans;
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 
 