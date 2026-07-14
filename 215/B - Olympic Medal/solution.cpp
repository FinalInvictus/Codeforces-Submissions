#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int n,m,k;
    cin>>n;
    int r =0;
    for (int i=0;i<n;++i) {
        int x;
        cin>>x;
        if (x>r)
            r = x;
    }
    cin>>m;
    int d1 =0;
    for (int i=0;i<m;++i) {
        int x;
        cin>>x;
        if (x>d1)
            d1 = x;
    }
    cin>>k;
    int d2 = INT_MAX;
    for (int i=0;i<k;++i) {
        int x;
        cin>>x;
        if (d2>x)
            d2 =x;
    }
    int a,b;
    cin>>a>>b;
    double ans = r*(sqrt(b*d1)/sqrt(a*d2 + b*d1));
    cout<<setprecision(9)<<ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}