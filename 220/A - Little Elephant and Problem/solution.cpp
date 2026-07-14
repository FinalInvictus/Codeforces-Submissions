//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n),b;
    for (int i=0;i<n;++i)
        cin>>a[i];
    b=a;
    sort(b.begin(),b.end());
    int change =0;
    for (int i=0;i<n;++i)
        if (a[i]!=b[i])
            change++;
    if (change<=2)
        cout<<"YES";
    else
        cout<<"NO";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}