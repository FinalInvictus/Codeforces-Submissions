//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    sort(a.begin(),a.end());
    int x=a[k-1];
    int count =0;
    for (int &i:a)
        if (x>=i)
            count++;
    if (k>0&&k==count)
        cout<<x;
    else {
        if (k==0)
            cout<<(a[k]==1?-1:1);
        else
            cout<<-1;
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}