#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    int total =0;
    for (int i=0;i<n;++i){
        cin>>a[i];
        total +=a[i];
    }
    sort(a.rbegin(),a.rend());
    int twin =0;
    int count =0;
    for (int i=0;i<n;++i) {
        if (twin<=total) {
            twin+=a[i];
            total -=a[i];
            count++;
        }
        else
            break;
    }
    cout<<count;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}