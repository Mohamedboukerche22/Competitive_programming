#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
const int N = 1e9;
const int MOD = 1e9 +7;
int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
       int n,m;
       cin >>n>>m;
       vector<int>r(n+1),w(m+1),e(m*2);
       for(int i = 1 ; i<= n ;i++)cin >>r[i];
       for(int i = 1 ; i<= m ;i++)cin >>w[i];
       for(int i = 0; i < m*2;i++)cin >>e[i];       

       priority_queue<int, vector<int>, greater<int>> q;
       for (int i = 1; i <= n; i++) q.push(i);
       ll score = 0;
       queue<int>wait;
       vector<int>ons(m+1);

       for(int i : e){
        if(i > 0){
          if(!q.empty()){
            int used = q.top();
            q.pop();
            ons[i] = used;
            score += 1LL * r[used] * w[i];
            //score += 1LL * r[i] * w[used];
          }else{
            wait.push(i);
          }

        }
        else{
            int f = abs(i);
            int used = ons[f];
            if(!wait.empty()){
                int n = wait.front();
                wait.pop();
                ons[n] = used;
                score += 1LL * r[used] * w[n];
              //score += 1LL * r[used] * w[n];
            }else{
                q.push(used);
            }

        }
    }
        cout<<score<<"\n";

        
       

    return 0;
}
}
