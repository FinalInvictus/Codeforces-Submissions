//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    string s;
    cin>>s;
    int ans =0;
    int count =0;
    for (int i=0;i<s.length();++i) {
        ans++;
        if (s[i]=='(')
            count++;
        else
            count--;
        if (count<0) {
            ans--;
            count++;
        }
    }
    ans -= count;
    cout<<ans;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}