#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve(){
    int n,k,w;
    cin>>k>>n>>w;
    int d = k*(w*(w+1)/2);
    if (d-n>0)
        cout<<d-n;
    else
        cout<<0;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}