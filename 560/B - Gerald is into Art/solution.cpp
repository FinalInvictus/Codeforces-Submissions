//Author:CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
using ll= long long int;
 
void solve(){
    int a,b,p,q,r,s;
    cin>>a>>b;
    cin>>p>>q;
    cin>>r>>s;
    bool check = false;
    for (int i=0;i<2;++i) {
        swap(p,q);
        for (int j=0;j<2;++j) {
            swap(r,s);
            int w = p+r;
            int x = max(q,s);
            bool c1 = w<=a&&x<=b;
            int y = q+s;
            int z = max(p,r);
            bool c2 = y<=b&&z<=a;
            if (c1||c2) {
                check = true;
                break;
            }
        }
    }
    if (check)
        cout<<"YES";
    else
        cout<<"NO";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}