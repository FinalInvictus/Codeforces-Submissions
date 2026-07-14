//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int o = 0;
    for (int i=0;i<s.length();++i)
        if (s[i] == '1')
            o++;
    int sum = 0;
    for (int i = 0; i < n; ) {
        if (s[i] =='1') {
            i++;
            continue;
        }
        int j = i;
        while (j<n && s[j] =='0')
            j++;
        int l = j-i;
        bool lb;
        if (i > 0 && s[i - 1] == '1')
            lb = true;
        else
            lb = false;
        bool rb;
        if (j < n && s[j] == '1')
            rb = true;
        else
            rb = false;
        if (!lb && !rb)
            sum +=(l+2)/ 3;
        else if (lb && rb)
            sum +=l/3;
        else
            sum +=(l+1)/3;
        i =j;
    }
    cout << o + sum << '
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}