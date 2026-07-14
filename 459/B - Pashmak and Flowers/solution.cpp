//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    ll n;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    int x = *max_element(a.begin(),a.end());
    int y = *min_element(a.begin(),a.end());
    ll c1 =0;
    ll c2 =0;
    for (int i=0;i<n;++i) {
        if (a[i]==x)
            c1++;
        if (a[i]==y)
            c2++;
        else
            continue;
    }
    int mdiff = x-y;
    ll combo =0;
    if (x==y) {
        combo = (n*(n-1))/2;
    }
    else
        combo = c1*c2;
    cout<<mdiff<<" "<<combo;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}