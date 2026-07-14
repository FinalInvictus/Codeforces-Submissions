#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int n,t;
    cin>>n>>t;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    int pos =0;
    int sum =0;
    int ans = 0;
    for (int i=0;i<n;++i) {
        while (pos<n && sum+a[pos]<=t) {
            sum += a[pos];
            pos++;
        }
        ans = max(ans,pos-i);
        sum -=a[i];
    }
    cout<<ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}