//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
int lim = 1000000;
 
double dist(int x,int y) {
    double ans = sqrt(pow(x,2)+pow(y,2));
    return ans;
}
void solve() {
    int n,s;
    cin>>n>>s;
    vector<pair<double,int>> a(n);
    for (int i=0;i<n;++i) {
        int x,y,k;
        cin>>x>>y>>k;
        double d = dist(x,y);
        a[i].first = d;
        a[i].second = k;
    }
    sort(a.begin(),a.end());
    double ans =0;
    for (int i=0;i<n;++i) {
        s += a[i].second;
        ans = max(ans,a[i].first);
        if (s>=lim)
            break;
    }
    if (s<lim)
        cout<<-1;
    else
        cout<<setprecision(8)<<ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}