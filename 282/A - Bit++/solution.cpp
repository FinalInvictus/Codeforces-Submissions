#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve() {
    int n;
    cin>>n;
    int x =0;
    for (int i=0;i<n;++i) {
        string a;
        cin>>a;
        if (a[1]=='+')
            x++;
        else
            x--;
    }
    cout<<x;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}