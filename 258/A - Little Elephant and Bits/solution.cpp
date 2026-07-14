//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    string s;
    cin>>s;
    int count =0;
    for (int i=0;i<s.length();++i)
        if (s[i]=='1')
            count++;
    if (count==s.length())
        s.erase(0,1);
    else {
        for (int i=0;i<s.length();++i)
            if (s[i]=='0') {
                s.erase(i,1);
                break;
            }
    }
 
    cout<<s;
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}