#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
int dy(ll n) {
    int sum =0;
    while (n>0) {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
 
void solve() {
    int x;
    cin >> x;
    int count =0;
    for (int i=0;i<86;++i) {
        ll y = i+x;
        if (dy(y)==i)
            count++;
    }
    cout<<count<<'
';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}