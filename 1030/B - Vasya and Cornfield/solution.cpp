//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int n,d;
    cin>>n>>d;
    int m;
    cin>>m;
    while (m--) {
        int x,y;
        cin>>x>>y;
        bool a = ((x+y)>=d&&(x+y)<=2*n-d)?true:false;
        bool b = ((x-y)>=-d&&(x-y)<=d)?true:false;
        if (a&&b)
            cout<<"YES"<<'
';
        else
            cout<<"NO"<<'
';
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}