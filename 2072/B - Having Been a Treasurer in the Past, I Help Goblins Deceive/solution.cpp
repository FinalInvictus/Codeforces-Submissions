#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll k =0;
    ll d = 0;
 for(int i = 0; i<n; i++){
     if(s[i]=='-')d++;
     else k++;
 }
 cout<< ((d/2))*((d+1)/2)*k<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}