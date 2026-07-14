#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
 
void solve(){
    int n;
    cin>>n;
    vector<int> x(n);
    int a =0;
    int b =0;
    int c =0;
    for (int i=0;i<n;++i) {
        cin>>x[i];
        if ((i+1)%3==1)
            a+=x[i];
        else if ((i+1)%3==2)
            b +=x[i];
        else
            c+=x[i];
    }
    int max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    if (max==a)
        cout<<"chest";
    else if (max==b)
        cout<<"biceps";
    else
        cout<<"back";
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}