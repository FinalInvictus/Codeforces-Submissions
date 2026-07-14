//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin>>n;
    int sum =0;
    for (int i=0;i<n;++i) {
        int a;
        cin>>a;
        sum+=a;
    }
    if (sum>0)
        cout<<"HARD";
    else
        cout<<"EASY";
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}