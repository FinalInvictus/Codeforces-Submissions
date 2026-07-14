//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    string n;
    cin>>n;
    int count =0;
    for (int i=0;i<n.length();++i) {
        if (n[i]=='4'||n[i]=='7')
            count++;
    }
    if (count ==4||count==7)
        cout<<"YES";
    else
        cout<<"NO";
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
 
}