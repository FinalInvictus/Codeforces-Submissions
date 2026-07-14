#include <bits/stdc++.h>
using namespace std;
 
using ll= long long int;
 
double d(int a,int b, int c, int d) {
    double x = pow(a-c,2);
    double y = pow(b-d,2);
    double dist = sqrt(x+y);
    return dist;
}
 
void solve() {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int n;
    cin>>n;
    vector<vector<int>> rad(n,vector<int>(3));
    for (int i=0;i<n;++i) {
        int p,q,r;
        cin>>p>>q>>r;
        rad[i][0] = p;
        rad[i][1] = q;
        rad[i][2] = r;
    }
    int x3 = min(x1,x2);
    int y3 = min(y1,y2);
    int x4 = max(x1,x2);
    int y4 = max(y1,y2);
    vector<pair<int,int>> coords;
    for (int i=x3;i<=x4;++i)
        for (int j=y3;j<=y4;++j)
            if (i==x3||j==y3||i==x4||j==y4)
                coords.push_back({i,j});
    int count =0;
    for (auto &c:coords) {
        bool check = true;
        int c1 = c.first;
        int c2 = c.second;
        for (int i=0;i<n;++i) {
            int c3 = rad[i][0];
            int c4 = rad[i][1];
            if (d(c1,c2,c3,c4)<=rad[i][2]) {
                check = false;
                break;
            }
        }
        if (check)
            count++;
    }
    cout<<count;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}