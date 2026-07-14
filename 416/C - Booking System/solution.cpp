//Author:CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
class grp {
public:
    int size;
    int spend;
    int id;
};
 
class table {
public:
    int id;
    int size;
};
 
bool byspend(const grp &g1, const grp &g2) {
    return g1.spend>g2.spend;
}
 
bool bysize(const table &t1, const table &t2) {
    return t1.size<t2.size;
}
 
bool condition(const table &t1, const grp &t2) {
    return t1.size<t2.size;
}
 
void solve() {
    int n,k;
    cin>>n;
    vector<grp> a(n);
    for (int i=0;i<n;++i) {
        a[i].id = i+1;
        cin>>a[i].size>>a[i].spend;
    }
    cin>>k;
    vector<table> b(k);
    for (int i=0;i<k;++i) {
        cin>>b[i].size;
        b[i].id = i+1;
    }
    sort(a.begin(),a.end(),byspend);
    sort(b.begin(), b.end(),bysize);
    vector<pair<int,int>> ans;
    int sum = 0;
    for (int i=0;i<n;++i) {
        auto x = a[i];
        auto find = lower_bound(b.begin(), b.end(),x,condition);
        if (find==b.end())
            continue;
        int pos = find->id;
        sum += a[i].spend;
        ans.push_back({a[i].id,pos});
        b.erase(find);
    }
    cout<<ans.size()<<" "<<sum<<'
';
    for (auto x:ans)
        cout<<x.first<<" "<<x.second<<'
';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}