//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    int count =1;
    for (int i=0;i<n;++i) {
        int x =i;
        int tc =1;
        //Left Side count:
        while (x>0) {
            if (a[x]>=a[x-1]) {
                tc++;
                x--;
            }
            else
                break;
        }
        x = i;
        //Right side count:
        while (x<n-1) {
            if (a[x]>=a[x+1]) {
                tc++;
                x++;
            }
            else
                break;
        }
        count = max(tc,count);
    }
    cout<<count;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}