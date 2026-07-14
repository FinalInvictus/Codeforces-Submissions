//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int x;
    cin>>x;
    int a = x/100;
    int b = (x%100)/20;
    int c = ((x%100)%20)/10;
    int d = (((x%100)%20)%10)/5;
    int e = ((((x%100)%20)%10)%5);
    int sum = a+b+c+d+e;
    cout<<sum;
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
 
 