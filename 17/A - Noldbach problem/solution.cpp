//Author: CelestialRex
#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
int n,k;
vector<int> sieve(1001,false);
 
void Sieve() {
    sieve[0] = 1;
    sieve[1] = 1;
    for (int i=2;i<=n;++i) {
        if (!sieve[i]) {
            for (int j=i*i;j<=n;j+=i)
                sieve[j] = true;
        }
    }
}
 
void solve() {
    cin>>n>>k;
    vector<int> primes;
    Sieve();
    for (int i=2;i<=n;++i)
        if (!sieve[i])
            primes.push_back(i);
    int count =0;
    for (int i=0;i<primes.size()-1;++i) {
        int x = primes[i] + primes[i+1] + 1;
        if (x<=n && !sieve[x])
            count++;
    }
    if (count>=k)
        cout<<"YES";
    else
        cout<<"NO";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t;
    // cin>>t;
    // while (t--)
        solve();
    return 0;
}