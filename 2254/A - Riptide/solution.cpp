//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const ll lim = 1000000000+1;
 
 
void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    int count =0;
    while (!(a==b || a==c || b==c)) {
        //Find max and min
        int x = max(a,max(b,c));
        if (x==a)
            a--;
        else if (x==b)
            b--;
        else if (x==c)
            c--;
        int y = min(a,min(b,c));
        if (y==a)
            a++;
        else if (y==b)
            b++;
        else if (y==c)
            c++;
        count++;
    }
    cout<<count<<'
';
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}