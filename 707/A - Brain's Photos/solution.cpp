//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,m;
    cin>>n>>m;
    int w =0;
    int c =0;
    for (int i=0;i<n;++i)
        for (int j=0;j<m;++j) {
            char a;
            cin>>a;
            if (a=='W'||a=='G'||a=='B')
                w++;
            else
                c++;
        }
    if (w>c&&c==0)
        cout<<"#Black&White";
    else
        cout<<"#Color";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
 
 