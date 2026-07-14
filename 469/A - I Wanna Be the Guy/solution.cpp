//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int p,q,n,x;
    cin>>n;
    cin>>p;
    unordered_set<int> s;
    for (int i=0;i<p;++i) {
        cin>>x;
        s.insert(x);
    }
    cin>>q;
    for (int i=0;i<q;++i) {
        cin>>x;
        s.insert(x);
    }
    if (s.size()==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}