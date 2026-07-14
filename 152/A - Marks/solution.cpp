//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    int count =0;
    for (int i=0;i<n;++i) {
        bool check = false;
        for (int j=0;j<m;++j) {
            bool ver = true;
            for (int k=0;k<n;++k)
                if (a[k][j]>a[i][j])
                    ver = false;
            if (ver)
                check = true;
        }
        if (check)
            count++;
    }
    cout<<count;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}