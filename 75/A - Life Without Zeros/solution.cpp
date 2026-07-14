//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int a,b;
    cin>>a;
    cin>>b;
    int c = a+b;
    int x =0;
    int y=0;
    int p =1;
    while (a>0) {
        if (a%10!=0) {
            x +=(a%10)*p;
            p *=10;
        }
        a/=10;
    }
    p =1;
    while (b>0) {
        if (b%10!=0) {
            y +=(b%10)*p;
            p *=10;
        }
        b/=10;
    }
    p =1;
    int c1 =0;
    while (c>0) {
        if (c%10!=0) {
            c1 +=(c%10)*p;
            p *=10;
        }
        c/=10;
    }
    if (x+y==c1)
        cout<<"YES";
    else
        cout<<"NO";
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 
 