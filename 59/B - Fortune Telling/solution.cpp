//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve(){
    int n;
    cin>>n;
    int tcount =0;
    int mini = INT_MAX;
    int oc =0;
    for (int i=0;i<n;++i) {
        int a;
        cin>>a;
        if (a%2!=0) {
            mini = min(mini,a);
            oc++;
        }
        tcount +=a;
    }
    if (oc==0)
        cout<<0;
    else {
        if (tcount%2==0)
            cout<<tcount-mini;
        else
            cout<<tcount;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}