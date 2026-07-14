#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve() {
    string s;
    cin>>s;
    if (s[0]>='A'&&s[0]<='Z')
        cout<<s;
    else {
        s[0]-=32;
        cout<<s;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}