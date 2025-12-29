//https://cms.algerianoi.com/decampdiv2c2/tasks/tri/statements/en/tri.en.pdf
#include <bits/stdc++.h>
using namespace std;
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
const int N = 2e5 +1;
 
 
void solve(){
 
    int A,B,C;
    cin >> A >> B >> C;
    if(A + B  == C){
        cout <<A<<'+'<<B<<'='<<C;
        return ;
    }
    if(A * B  == C){
        cout <<A<<'*'<<B<<'='<<C;
         return ;
    }
    if(A - B  == C){
        cout <<A<<'-'<<B<<'='<<C;
         return ;
    }
    if(A / B  == C){
        cout <<A<<'/'<<B<<'='<<C;
         return ;
    }

    if(B / C  == A){
        cout <<A<<'='<<B<<'/'<<C;
         return ;
    }
    if(B + C  == A){
        cout <<A<<'='<<B<<'+'<<C;
         return ;
    }
    if(B * C  == A){
        cout <<A<<'='<<B<<'*'<<C;
         return ;
    }
    if(B - C  == A){
        cout <<A<<'='<<B<<'-'<<C;
         return ;
    }
    
}
 
int main() {
    fastAOI;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
