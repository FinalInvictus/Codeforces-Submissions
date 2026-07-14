//Author:CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
using ll= long long int;
 
void solve(){
    int r1,r2,c2,c1,d1,d2,a,b,c,d;
    cin>>r1>>r2;
    cin>>c1>>c2;
    cin>>d1>>d2;
    a = (r1+c1-d2)/2;
    b = r1-a;
    c = c1-a;
    d = d1-a;
    bool p = (a==b||b==c||c==d||d==a||a==c||b==d);
    bool q = (a>0&&a<=9)&&(b>0&&b<=9)&&(c>0&&c<=9)&&(d>0&&d<=9);
    bool r = (a+b==r1)&&(c+d==r2)&&(a+c==c1)&&(b+d==c2)&&(a+d==d1)&&(b+c==d2);
    if (!p&&q&&r)
        cout<<a<<' '<<b<<'
'<<c<<' '<<d;
    else
        cout<<-1;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}