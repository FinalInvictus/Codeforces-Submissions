//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int a,y,x;
    cin>>a>>x>>y;
    int d = ((y+a-1)/a)-1;
    int ans =0;
    bool oCheck = x>-((a+1)/2)&&x<((a+1)/2)&&y%a!=0;
    bool eCheck = x>-a&&x<a&&x!=0&&y%a!=0;
    if (d%2!=0) {
        if (oCheck)
            ans = 2 + ((d-1)/2)*3;
        else
            ans = -1;
    }
    if (d==0) {
        if (oCheck)
            ans = 1;
        else
            ans = -1;
    }
    if (d%2==0&&d!=0){
        if (eCheck) {
            d +=1;
            if (x>0)
                ans = 1+((d-1)/2)*3;
            else
                ans = ((d-1)/2)*3;
        }
        else
            ans = -1;
    }
    cout<<ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}