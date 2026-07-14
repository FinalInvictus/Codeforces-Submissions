#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve() {
    int x[3];
    for (int i=0;i<3;++i)
        cin>>x[i];
    sort(std::begin(x), std::end(x));
    int min = abs(x[1]-x[0])+abs(x[1]-x[2]);
    cout<<min;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}