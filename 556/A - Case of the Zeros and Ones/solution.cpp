#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve() {
    int n;
    cin>>n;
    int c1=0;
    int c2=0;
    unordered_map<char,int> m;
    for (int i=0;i<n;++i) {
        char a;
        cin>>a;
        m[a]++;
    }
    cout<<abs(m['1']-m['0']);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}