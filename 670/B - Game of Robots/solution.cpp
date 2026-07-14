#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;++i)
        cin>>a[i];
    int ans =0;
    for (int i=0;i<n;++i) {
        if (i+1>=k) {
            ans = a[k-1];
            break;
        }
        else
            k-=i+1;
    }
    cout<<ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}