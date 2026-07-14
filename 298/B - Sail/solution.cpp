//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve(){
    ll r,x,y,a,b;
    cin>>r>>x>>y>>a>>b;
    string s;
    cin>>s;
    int time =0;
    bool find = false;
    for (int i=0;i<s.length();++i) {
        ll p,q;
        if (s[i]=='N') {
            p = x;
            q = y+1;
            if (abs(b-y)>abs(b-q))
                y++;
        }
        if (s[i]=='S') {
            p = x;
            q = y-1;
            if (abs(b-y)>abs(b-q))
                y--;
        }
        if (s[i]=='W') {
            p = x-1;
            q = y;
            if (abs(a-x)>abs(a-p))
                x--;
        }
        if (s[i]=='E') {
            p = x+1;
            q = y;
            if (abs(a-x)>abs(a-p))
                x++;
        }
        time++;
        if (abs(p-a)==0&&abs(q-b)==0) {
            find = true;
            break;
        }
    }
    if (find)
        cout<<time;
    else
        cout<<-1;
 
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}