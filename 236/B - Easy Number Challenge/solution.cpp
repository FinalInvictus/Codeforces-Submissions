//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    int maxi = a*b*c;
    vector<int> div(maxi+1,0);
    for (int i=1;i<=maxi;++i)
        for (int j=i;j<=maxi;j+=i)
            div[j]++;
    ll sum =0;
    for (int i=1;i<=a;++i)
        for (int j=1;j<=b;++j)
            for (int k=1;k<=c;++k)
                sum = (sum+div[i*j*k])%1073741824;
    cout<<sum;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}