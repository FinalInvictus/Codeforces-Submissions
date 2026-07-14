//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    string s;
    int count =0;
    int total =0;
    while (getline(cin,s)) {
        if (s[0]=='+')
            count++;
        else if (s[0]=='-')
            count--;
        else {
            int x =s.find(':')+1;
            int l = s.length()-x;
            total += l*count;
        }
    }
    cout<<total;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}