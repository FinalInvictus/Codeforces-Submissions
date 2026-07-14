//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve(){
    int n,x,y;
    cin>>n;
    vector<int> a(n+1,0);
    for (int i=1;i<=n;++i) {
        int v;
        cin>>v;
        a[i] = a[i-1] +v;
    }
    cin>>x>>y;
    int ans=1;
    bool check = true;
    for (int i=1;i<=n;++i) {
        if (a[i]>=x&&a[i]<=y)
            if (a[n]-a[i]>=x&&a[n]-a[i]<=y) {
                ans = i+1;
                check = false;
                break;
            }
    }
    if (check)
        cout<<0;
    else
        cout<<ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}