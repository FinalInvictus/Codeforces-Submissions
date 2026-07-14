//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin>>n;
    string s;
    for (int i=0;i<n;++i) {
        if (i<n-1) {
            s += (i%2==0)?"I hate that ":"I love that ";
        }
        else {
            s += (i%2==0)?"I hate it ":"I love it";
        }
    }
    cout<<s;
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
 
}