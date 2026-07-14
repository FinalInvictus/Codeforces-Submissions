#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
void solve() {
    int n;
    cin>>n;
    int l = 100001;
    vector<vector<int>> a(l);
    for (int i=0;i<n;++i) {
        int x;
        cin>>x;
        a[x].push_back(i);
    }
    vector<pair<int,int>> ans;
    for (int i=1;i<l;++i) {
        if (a[i].size()>1) {
            int diff = a[i][1] - a[i][0];
            bool check = true;
            for (int j=1;j<a[i].size()-1;++j)
                if (a[i][j+1]-a[i][j]!=diff) {
                    check = false;
                    break;
                }
            if (check)
                ans.push_back({i,diff});
        }
        if (a[i].size()==1)
            ans.push_back({i,0});
    }
    cout<<ans.size()<<'
';
    for (auto &x:ans)
        cout<<x.first<<" "<<x.second<<'
';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}