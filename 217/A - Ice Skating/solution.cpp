//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
int n;
vector<pair<int,int>> a(101);
vector<bool> vis(1001,false);
 
void dfs(int u) {
    vis[u] = true;
    for (int i=0;i<n;++i)
        if (!vis[i]&&(a[u].first==a[i].first||a[u].second==a[i].second))
            dfs(i);
}
 
void solve() {
    cin>>n;
    for (int i=0;i<n;++i)
        cin>>a[i].first>>a[i].second;
    int comp =0;
    for (int i=0;i<n;++i) {
        if (!vis[i]) {
            comp++;
            dfs(i);
        }
    }
    cout<<comp-1;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}