//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
ll mod = 1000003;
 
string val(char a) {
    if (a=='>')
        return "1000";
    if (a=='<')
        return "1001";
    if (a=='+')
        return "1010";
    if (a=='-')
        return "1011";
    if (a=='.')
        return "1100";
    if (a==',')
        return "1101";
    if (a=='[')
        return "1110";
    if (a==']')
        return "1111";
}
 
ll convert(string a) {
    ll ans = 0;
    for (int i=0;i<a.length();++i)
        ans = (ans*2 + (a[i]-'0'))%mod;
    return ans;
}
 
void solve() {
    string a;
    cin>>a;
    string total;
    for (int i=0;i<a.length();++i)
        total +=val(a[i]);
    ll ans = convert(total);
    cout<<ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}