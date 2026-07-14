//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    int cur =0;
    for (int i=0;i<k;++i)
        cur += a[i];
    int best = cur;
    int index =0;
    for (int i=k;i<n;++i) {
        cur += a[i];
        cur -=a[i-k];
        if (best>cur) {
            best = cur;
            index = i-k+1;
        }
    }
    cout<<index+1;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}