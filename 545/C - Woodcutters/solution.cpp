//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i].first>>a[i].second;
    int p = INT_MIN;
    int count =0;
    for (int i=0;i<n;++i) {
        int x = a[i].first;
        int h = a[i].second;
        if (x-h>p) {
            p = x;
            count++;
        }
        else if (x+h<a[i+1].first||i==n-1) {
            p = x+h;
            count++;
        }
        else
            p = x;
    }
    cout<<count;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}