//Author:CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
using ll= long long int;
 
int search(vector<int> &a, int x) {
    int low =0;
    int high = a.size()-1;
    int mid;
    while (high-low>1) {
        mid = (high+low)/2;
        if (a[mid]<=x)
            low = mid;
        if (a[mid]>=x)
            high = mid;
    }
    if (a[low]>=x)
        return low;
    if (a[high]>=x)
        return high;
    return -1;
}
 
void solve(){
    int n,m;
    cin>>n;
    vector<int> a(n+1);
    for (int i=0;i<n;++i) {
        int x;
        cin>>x;
        if (i==0)
            a[i] =x;
        else
            a[i]=a[i-1]+x;
    }
    cin>>m;
    while (m--) {
        int x;
        cin>>x;
        int ans = search(a,x);
        cout<<ans+1<<'
';
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}