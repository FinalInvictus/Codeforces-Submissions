//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    bool ans = false;
    int rep=0;
    while (n>=0&&rep<12) {
        if (n%11==0) {
            ans = true;
            break;
        }
        n-=111;
        rep++;
    }
    if (ans)
        cout<<"YES"<<'
';
    else
        cout<<"NO"<<'
';
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}