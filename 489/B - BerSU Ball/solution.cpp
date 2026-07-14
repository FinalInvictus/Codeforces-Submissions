//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,m;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    cin>>m;
    vector<int> b(m);
    for (int i=0;i<m;++i)
        cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int x =0;
    int y =0;
    int count =0;
    while (x<n&&y<m) {
        if (abs(a[x]-b[y])<=1) {
            count++;
            x++;
            y++;
        }
        else if (a[x]<b[y])
            x++;
        else
            y++;
    }
    cout<<count;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}