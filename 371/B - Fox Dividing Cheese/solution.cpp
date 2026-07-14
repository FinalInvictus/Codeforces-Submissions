//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve(){
    int a,b;
    cin>>a>>b;
    int x=0;
    int y =0;
    int z =0;
    while (a%2==0) {
        a/=2;
        x++;
    }
    while (b%2==0) {
        b/=2;
        x--;
    }
    while (a%3==0) {
        a/=3;
        y++;
    }
    while (b%3==0) {
        b/=3;
        y--;
    }
    while (a%5==0) {
        a/=5;
        z++;
    }
    while (b%5==0) {
        b/=5;
        z--;
    }
    int ans = abs(x)+abs(y)+abs(z);
    if (a==b)
        cout<<ans;
    else
        cout<<-1;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}