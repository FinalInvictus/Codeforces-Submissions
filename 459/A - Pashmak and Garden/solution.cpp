//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
void solve() {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if (x1!=x2&&y1!=y2&&abs(x1-x2)!=abs(y1-y2))
        cout<<-1;
    else if (x1==x2) {
        int x3 = x1+abs(y1-y2);
        int x4 = x1+abs(y1-y2);
        int y3 = y1;
        int y4 = y2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else if (y1==y2) {
        int x3 = x1;
        int x4 = x2;
        int y3 = y1+abs(x1-x2);
        int y4 = y1+abs(x1-x2);
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}