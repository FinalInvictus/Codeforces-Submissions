//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    string s;
    cin>>s;
    int count =0;
    while (s.length()!=1) {
        ll sum =0;
        for (int i=0;i<s.length();++i)
            sum += s[i]-'0';
        count++;
        s = to_string(sum);
    }
    cout<<count;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 
 