#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve(){
    int n;
    cin>>n;
    int wc=0;
    for (int i=0;i<n;++i) {
        int count =0;
        for (int j=0;j<3;++j) {
            int a;
            cin>>a;
            if (a==1)
                count++;
        }
        if (count>1)
            wc++;
    }
    cout<<wc;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}