//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin>>n;
    unordered_map<string,int> m;
    for (int i=0;i<n;++i) {
        string s;
        cin>>s;
        m[s]++;
        if (m[s]>1)
            cout<<s<<m[s]-1<<'
';
        else
            cout<<"OK"<<'
';
    }
 
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}