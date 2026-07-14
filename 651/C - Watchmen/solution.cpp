//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> coords(n);
    map<pair<int,int>,int> m;
    unordered_map<int,int> x;
    unordered_map<int,int> y;
    for (int i=0;i<n;++i) {
        cin>>coords[i].first>>coords[i].second;
        x[coords[i].first]++;
        y[coords[i].second]++;
        m[coords[i]]++;
    }
    ll ans =0;
    for (int i=0;i<n;++i) {
        ans += x[coords[i].first]+y[coords[i].second]-m[coords[i]];
        x[coords[i].first]--;
        y[coords[i].second]--;
        m[coords[i]]--;
    }
    ans -=n;
    cout<<ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}