//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int n,l;
    cin>>n>>l;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    sort(a.begin(),a.end());
    double d = a[0];
    for (int i=0;i<n-1;++i) {
        double x = (a[i+1]-a[i])/2.0;
        d = max(d,x);
    }
    double p = l-a[n-1];
    d = max(d,p);
    cout<<setprecision(10)<<d;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}