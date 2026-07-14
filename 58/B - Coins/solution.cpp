//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
vector<int> a;
 
void count(int n) {
    a.push_back(n);
    int max =0;
    for (int i=1;i<n;++i)
        if (n%i==0&&i>max)
            max = i;
    if (max>1)
        count(max);
}
 
void solve(){
    int n;
    cin>>n;
    count(n);
    if (n>1)
        a.push_back(1);
    for (int &x:a)
        cout<<x<<" ";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}