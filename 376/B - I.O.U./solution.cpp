#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> g(n,0);
    while (m--) {
        int a,b,c;
        cin>>a>>b>>c;
        g[a-1] +=c;
        g[b-1] -=c;
    }
    int total =0;
    for (int i=0;i<n;++i)
        if (g[i]>0)
            total += g[i];
    cout<<total;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}