//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
int n,m;
int lim = 300002;
vector<int> parent(lim,0);
vector<int> killed(lim,0);
 
int find(int x) {
    if (parent[x]==x)
        return x;
    return parent[x] = find(parent[x]);
}
 
void solve(){
    cin>>n>>m;
    for (int i=1;i<=n+1;++i)
        parent[i] = i;
    for (int i=0;i<m;++i) {
        int l,r,x;
        cin>>l>>r>>x;
        int curr = find(l);
        while (curr<=r) {
            if (curr!=x) {
                killed[curr] = x;
                parent[curr] = curr+1;
            }
            curr = find(curr+1);
        }
    }
    for (int i=1;i<=n;++i)
        cout<<killed[i]<<" ";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}