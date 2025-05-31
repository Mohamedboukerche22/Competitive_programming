// intractive prb 
//this is an interactive problem, where you and the judge exchange information back-and-forth to solve the problem.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
     ll n;cin >> n;
     vector<ll>perm(n-1);
     vector<ll>p(n-1);
    for(int i=2;i<=n;i++){
        cout<<"? "<<1<<" "<<i<<"\n";
        cin >>p[i-2];
    }
        for(ll i:p) perm[0]=__gcd(perm[0],i);
        cout <<"! "<<perm[0];
        for (ll i:p)cout<<" "<<i/perm[0]; 
        cout <<endl;  
    
  
    return 0;
}
