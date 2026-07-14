#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve() {
    string s;
    cin>>s;
    string r;
    string v ="aeiouy";
    for (int i=0;i<s.length();++i) {
        char a = tolower(s[i]);
        if (v.find(a)==string::npos) {
            r+='.';
            r+=a;
        }
    }
    cout<<r;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}