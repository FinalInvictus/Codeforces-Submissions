//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
void solve() {
    int n,m;
    cin>>n>>m;
    if (m%n!=0)
        cout<<-1;
    else {
        int x = m/n;
        int count =0;
        while (x%2==0) {
            x/=2;
            count++;
        }
        while (x%3==0) {
            x/=3;
            count++;
        }
        if (x!=1)
            cout<<-1;
        else
            cout<<count;
    }
 
 
 
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}