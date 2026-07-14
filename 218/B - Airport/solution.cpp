#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> a(m),maxi,mini;
    for (int i=0;i<m;++i)
        cin>>a[i];
    int max =0;
    int x = n;
    maxi = a;
    while (x--) {
        int d=0;
        int index =0;
        for (int i=0;i<m;++i) {
            if (maxi[i]>d) {
                d=maxi[i];
                index=i;
            }
        }
        max += d;
        maxi[index] -=1;
    }
    int min =0;
    int y =n;
    mini = a;
    while (y--) {
        int d=INT_MAX;
        int index =0;
        for (int i=0;i<m;++i) {
            if (d>mini[i]&&mini[i]>0) {
                d=mini[i];
                index=i;
            }
        }
        min += d;
        mini[index] -=1;
    }
    cout<<max<<" "<<min;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}