//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    vector<string> a(8);
    bool check = true;
    for (int i=0;i<8;++i)
        cin>>a[i];
    for (int i=0;i<8;++i) {
        bool run = true;
        for (int j=0;j<8;++j) {
            if (a[i][j]!='R') {
                run = false;
                break;
            }
        }
        if (run) {
            check = false;
            break;
        }
    }
    if (!check)
        cout<<"R"<<'
';
    else
        cout<<"B"<<'
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