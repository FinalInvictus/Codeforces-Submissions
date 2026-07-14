//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n,1),b(n,1),c(n,2);
    unordered_set<int> as,bs,cs;
    for (int i=0;i<n;++i) {
        a[i] = i;
        b[i] = a[i];
        c[i] = (a[i]+b[i])%n;
        as.insert(a[i]);
        bs.insert(b[i]);
        cs.insert(c[i]);
    }
    bool check = as.size()==n&&bs.size()==n&&cs.size()==n;
    if (check) {
        for (int i=0;i<n;++i)
            cout<<a[i]<<" ";
        cout<<'
';
        for (int i=0;i<n;++i)
            cout<<b[i]<<" ";
        cout<<'
';
        for (int i=0;i<n;++i)
            cout<<c[i]<<" ";
        cout<<'
';
    }
    else
        cout<<-1;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}