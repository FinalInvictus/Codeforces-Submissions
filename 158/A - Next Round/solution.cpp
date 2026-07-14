#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve(){
    int n,k;
    cin>>n>>k;
    int count =0;
    vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    for (int i=0;i<n;++i)
        if (a[i]>0&&a[i]>=a[k-1])
            count++;
    cout<<count;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}