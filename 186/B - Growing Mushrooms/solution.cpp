//Author:CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
using ll= long long int;
 
void solve(){
    int n,t1,t2,k;
    cin>>n>>t1>>t2>>k;
    vector<pair<int,int>> speed(n);
    for (int i=0;i<n;++i)
        cin>>speed[i].first>>speed[i].second;
    vector<pair<double,int>> a;
    for (int i=0;i<n;++i) {
        double x = min(speed[i].first,speed[i].second);
        double y = max(speed[i].first,speed[i].second);
        double h = max(y*t1*(100-k) + x*t2*100,x*t1*(100-k) + y*t2*100);
        a.push_back({-h,i+1});
    }
    sort(a.begin(),a.end());
    cout<<fixed<<setprecision(2);
    for (auto &x:a)
        cout<<x.second<<' '<<-x.first/100<<'
';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}