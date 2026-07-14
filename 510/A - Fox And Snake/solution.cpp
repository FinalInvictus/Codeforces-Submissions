#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve() {
    int n,m;
    cin>>n>>m;
    int count =0;
    for (int i=0;i<n;++i) {
        if (i%2==0)
            for (int j=0;j<m;++j)
                cout<<"#";
        else {
            count++;
            for (int j=0;j<m;++j) {
                if (count%2==0) {
                    string d =(j==0)?"#":".";
                    cout<<d;
                }
                else {
                    string d =(j==m-1)?"#":".";
                    cout<<d;
                }
            }
        }
        cout<<'
';
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}