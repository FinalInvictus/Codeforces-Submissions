//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    int pos1 =0;
    int pos2 =n-1;
    unordered_set<char> s1;
    unordered_set<char> s2;
    for (int i=0;i<n;++i) {
        string s;
        cin>>s;
        for (int j=0;j<n;++j) {
            if (j==pos1||j==pos2)
                s1.insert(s[j]);
            else
                s2.insert(s[j]);
        }
        pos1++;
        pos2--;
    }
    auto it1 = *s1.begin();
    auto it2 = *s2.begin();
    if (s1.size()==s2.size()&&it1!=it2&&s1.size()==1)
        cout<<"YES";
    else
        cout<<"NO";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 
 