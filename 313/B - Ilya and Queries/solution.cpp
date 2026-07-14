//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    string s;
    cin>>s;
    int n;
    cin>>n;
    int x = s.length();
    vector<int> a(x,0);
    for (int i=1;i<x;++i) {
        a[i]=a[i-1];
        if (s[i]==s[i-1])
            a[i]++;
    }
    while (n--) {
        int l,r;
        cin>>l>>r;
        int total = a[r-1]-a[l-1];
        cout<<total<<'
';
    }
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}