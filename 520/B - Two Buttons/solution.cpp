//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,m;
    cin>>n>>m;
    unordered_map<int,int> d;
    queue<int> q;
 
    d[m]=0;
    q.push(m);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        if (v==n)
            break;
        if (!d[v+1]) {
            d[v+1]=d[v]+1;
            q.push(v+1);
        }
        if (v%2==0&&!d[v/2]) {
            d[v/2] = d[v]+1;
            q.push(v/2);
        }
    }
    cout<<d[n];
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 
 