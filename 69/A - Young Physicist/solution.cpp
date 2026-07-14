#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve() {
    int n;
    cin>>n;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    for (int i=0;i<n;++i) {
        int a,b,c;
        cin>>a>>b>>c;
        sum1+=a;
        sum2+=b;
        sum3+=c;
    }
    if (sum1==0&&sum2==0&&sum3==0)
        cout<<"YES";
    else
        cout<<"NO";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}