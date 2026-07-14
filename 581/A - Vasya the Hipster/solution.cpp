#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve() {
    int a,b;
    cin>>a>>b;
    int x = (a>b)?b:a;
    int y = floor(abs(b-a)/2);
    cout<<x<<" "<<y;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}