//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    ll n,r,avg;
    cin>>n>>r>>avg;
    vector<pair<int,int>> a(n);
    ll sum =0;
    for (int i=0;i<n;++i) {
        cin>>a[i].second>>a[i].first;
        sum += a[i].second;
    }
    sort(a.begin(), a.end());
    ll req = (avg*n)-sum;
    ll count =0;
    for (int i=0;i<n;++i) {
        if (req>0) {
            if (r-a[i].second>0) {
                if (req>=r-a[i].second) {
                    count += (r-a[i].second)*a[i].first;
                    req -= (r-a[i].second);
                }
                else {
                    count += req*a[i].first;
                    req =0;
                }
            }
        }
        else
            break;
    }
    cout<<count;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}