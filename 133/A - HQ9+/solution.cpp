//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    string s;
    cin>>s;
    int c=0;
    for (int i=0;i<s.length();++i) {
        if (s[i]=='H'||s[i]=='Q'||s[i]=='9')
            c=1;
        else
            continue;
    }
    if (c==1)
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