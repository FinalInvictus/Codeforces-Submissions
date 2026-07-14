//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
void solve() {
    int n;
    cin>>n;
    int sum =0;
    for (int i=0;i<n;++i) {
        string s;
        cin>>s;
        if (s=="Tetrahedron")
            sum += 4;
        else if (s=="Cube")
            sum += 6;
        else if (s=="Octahedron")
            sum += 8;
        else if (s=="Dodecahedron")
            sum += 12;
        else
            sum += 20;
    }
    cout<<sum;
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}