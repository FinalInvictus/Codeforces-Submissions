//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int k;
    cin>>k;
    int total =0;
    int count =0;
    vector<int> a(12);
    for (int i=0;i<12;++i)
        cin>>a[i];
    sort(a.rbegin(),a.rend());
    for (int i=0;i<12;++i) {
        if (total<k) {
            total += a[i];
            count++;
        }
        else
            break;
    }
    if (total<k)
        cout<<-1;
    else
        cout<<count;
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
 
 