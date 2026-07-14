//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,a;
    cin>>n>>a;
    a = a-1;
    vector<int> g(n);
    for (int i=0;i<n;++i)
        cin>>g[i];
    int ans =0;
    for (int i =0;i<n;++i) {
        //Possibility == count --> criminal caught
        int x=0;
        int y=0;
        if (a-i>=0) {
            x++;
            if (g[a-i]==1)
                y++;
        }
        if (a+i<n) {
            x++;
            if (g[a+i]==1)
                y++;
        }
        if (i==0) {
            x = 1;
            if (g[a]==1)
                y = 1;
        }
        if (x==y)
            ans += y;
    }
    cout<<ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}