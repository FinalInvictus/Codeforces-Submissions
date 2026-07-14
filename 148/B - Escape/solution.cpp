//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    double vp,vd,t,f,c;
    cin>>vp;
    cin>>vd;
    cin>>t;
    cin>>f;
    cin>>c;
    bool check = true;
    if (vp>=vd)
        check = false;
    if (check) {
        double p = vp*t;
        int count =0;
        while (p<c) {
            double ct = p/(vd-vp);
            p += vp*ct;
            if (p>=c)
                break;
            count++;
            double rt = p/vd;
            p += vp*(rt+f);
        }
        cout<<count;
    }
    else
        cout<<0;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}