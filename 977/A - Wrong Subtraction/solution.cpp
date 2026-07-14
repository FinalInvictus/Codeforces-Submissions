#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve(){
    int n,k;
    cin>>n>>k;
    while (k--) {
        if (n%10!=0)
            n--;
        else
            n /=10;
    }
    cout<<n;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}