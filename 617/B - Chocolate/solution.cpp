#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int n;
    cin>>n;
    int ppos = -1;
    ll ans =0;
    for (int i=0;i<n;++i) {
        int a;
        cin>>a;
        if (a==1) {
            if (ppos==-1)
                ans =1;
            else
                ans *= i-ppos;
            ppos = i;
        }
    }
    cout<<ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}