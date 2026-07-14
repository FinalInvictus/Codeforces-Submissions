//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
 
void solve() {
    string s;
    cin>>s;
    int count =0;
    for (int i=1;i<s.length();++i) {
        if (s[i]>='A'&&s[i]<='Z')
            count++;
    }
    if (count ==s.length()-1) {
        for (int i=0;i<s.length();++i) {
            if (i>0&&s[i]>='A'&&s[i]<='Z')
                s[i]+=32;
            else {
                if (s[i]>='a'&&s[i]<='z')
                    s[i]-=32;
                else
                    s[i]+=32;
            }
 
        }
        cout<<s;
    }
    else
        cout<<s;
 
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}