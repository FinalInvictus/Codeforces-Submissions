//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> g(n+1);
    for (int i=0;i<m;++i) {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    map<pair<int,int>, unordered_set<int>> null;
    for (int i=0;i<k;++i) {
        int a,b,c;
        cin>>a>>b>>c;
        null[{a,b}].insert(c);
    }
    queue<pair<int,int>> q;
    map<pair<int,int>,pair<int,int>> p;
    set<pair<int,int>> vis;
    pair<int,int> end = {-1,-1};
    q.push({0,1});
    p[{0,1}]=end;
    vis.insert({0,1});
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        if (y==n) {
            end = {x,y};
            break;
        }
        for (int u:g[y]) {
            if (null[{x,y}].count(u))
                continue;
            if (vis.count({y,u}))
                continue;
            p[{y,u}]= {x,y};
            vis.insert({y,u});
            q.push({y,u});
        }
    }
    bool run = true;
    if (end.second==-1) {
        cout<<-1;
        run = false;
    }
    if (run) {
        vector<int> path;
        auto current = end;
        while (current.first!=0&&current.second!=1) {
            path.push_back(current.second);
            current = p[current];
        }
        path.push_back(1);
        reverse(path.begin(),path.end());
        cout<<path.size()-1<<'
';
        for (int i=0;i<path.size();++i) {
            cout<<path[i];
            if (i<path.size()-1)
                cout<<" ";
        }
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}