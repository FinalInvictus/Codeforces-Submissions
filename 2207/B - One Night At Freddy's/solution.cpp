#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n,m,l;
    cin>>n>>m>>l;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    multiset<int> s;
    for (int i=0;i<m;++i)
        s.insert(0);
    int j=0;
    for (int i=1;i<=l;++i) {
        int ele =n-j;
        auto it =s.begin();
        int pos = m -(ele+1);
        pos = max(0,pos);
        advance(it,pos);
        int value =*it;
        s.erase(it);
        s.insert(value+1);
        if (j<n&&a[j]==i) {
            auto del =prev(s.end());
            s.erase(del);
            s.insert(0);
            j++;
        }
    }
    int ans = *prev(s.end());
    cout<<ans<<'
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}