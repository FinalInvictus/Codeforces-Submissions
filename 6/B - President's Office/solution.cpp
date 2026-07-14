//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,m;
    char c;
    cin>>n>>m>>c;
    vector<vector<char>> a(n,vector<char>(m));
    queue<pair<int,int>> q;
    for (int i=0;i<n;++i)
        for (int j=0;j<m;++j) {
            cin>>a[i][j];
            if (a[i][j]==c)
                q.push({i,j});
        }
    int dx[] = {1,-1,0,0};
    int dy[] = {0,0,1,-1};
    unordered_set<char> col;
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        for (int i=0;i<4;++i) {
            int nx = x +dx[i];
            int ny = y +dy[i];
            if (nx>=0&&ny>=0&&nx<n&&ny<m)
                if (a[nx][ny]!='.'&&a[nx][ny]!=c)
                   col.insert(a[nx][ny]);
        }
    }
    cout<<col.size();
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}