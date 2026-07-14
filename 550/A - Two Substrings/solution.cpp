//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    string s;
    cin>>s;
    int n = s.length();
    int a = -1;
    int b = -1;
    int x = -1;
    int y = -1;
    for (int i=0;i<n-1;++i)
        if (s[i]=='A'&&s[i+1]=='B') {
            if (a==-1)
                a=i;
            b=i;
        }
    for (int i=0;i<n-1;++i)
        if (s[i]=='B'&&s[i+1]=='A') {
            if (x==-1)
                x=i;
            y=i;
        }
    bool ans = false;
    if (a!=-1&&y!=-1&&y>=a+2)
        ans = true;
    if (x!=-1&&b!=-1&&b>=x+2)
        ans = true;
    cout<<(ans?"YES":"NO");
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}