//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin>>n;
    ll fsum =0;
    ll sum =0;
    vector<int> f;
    vector<int> s;
    int last =0;
    for (int i=0;i<n;++i) {
        int a;
        cin>>a;
        if (a>0) {
            fsum += a;
            f.push_back(a);
        }
        else {
            sum += abs(a);
            s.push_back(abs(a));
        }
        if (i==n-1)
            last =a;
    }
    if (fsum>sum)
        cout<<"first";
    else if (fsum<sum)
        cout<<"second";
    else {
        if (s>f)
            cout<<"second";
        else if (s<f)
            cout<<"first";
        else {
            if (last>0)
                cout<<"first";
            else
                cout<<"second";
        }
    }
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
 
}