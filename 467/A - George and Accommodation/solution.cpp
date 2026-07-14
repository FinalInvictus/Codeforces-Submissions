#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve() {
    int n;
    cin>>n;
    int count =0;
    for (int i=0;i<n;++i) {
        int a,b;
        cin>>a>>b;
        if (abs(a-b)>1)
            count++;
        else
            continue;
    }
    cout<<count;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}