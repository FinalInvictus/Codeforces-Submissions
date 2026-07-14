//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    unordered_set<int> o;
    unordered_set<int> e;
    for (int i=0;i<n;++i) {
        int a;
        cin>>a;
        if (a%2!=0)
            o.insert(i+1);
        else
            e.insert(i+1);
    }
    if (o.size()>e.size())
        cout<<*e.begin();
    else
        cout<<*o.begin();
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
 
 