//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    map<int,int> m;
    for (int i=0;i<n;++i) {
        int a;
        cin>>a;
        if (i%2==0)
            m[a]=0;
        else
            m[a]=1;
    }
    int prev =-1;
    bool first = true;
    bool decision = true;
    for (auto &pr:m) {
        if (!first && pr.second==prev) {
            decision = false;
            break;
        }
        prev = pr.second;
        first = false;
    }
    if (decision)
        cout<<"YES"<<'
';
    else
        cout<<"NO"<<'
';
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}
 
 