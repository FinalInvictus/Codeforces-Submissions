//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
    ans.resize(n);
    char mid = s[0];
    string odd,even;
    if (n%2==0) {
        for (int i=n-1;i>0;--i)
            if (i%2==0)
                even += s[i];
        for (int i=1;i<n;++i)
            if (i%2!=0)
                odd += s[i];
        ans = even+mid+odd;
    }
    else {
        for (int i=n-1;i>0;--i)
            if (i%2!=0)
                odd += s[i];
        for (int i=1;i<n;++i)
            if (i%2==0)
                even += s[i];
        ans = odd + mid + even;
    }
    cout<<ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}