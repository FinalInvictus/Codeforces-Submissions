//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    string ans;
    int a =0;
    int b = 0;
    while (n--) {
        int x,y;
        cin>>x>>y;
        if (a-b+x>500) {
            b += y;
            ans += 'G';
        }
        else {
            a += x;
            ans += 'A';
        }
    }
    cout<<ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}