//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    string a;
    string b;
    cin>>a;
    cin>>b;
    string s;
    for (int i=0;i<a.length();++i) {
        if (a[i]!=b[i])
            s +="1";
        else
            s += "0";
    }
    cout<<s;
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
 
}