//https://cses.fi/problemset/task/1072/
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()

struct Trienode{
    Trienode* children[26];
    bool isendofword;
};
int main() {
    fastAOI;
    int t = 1;
    
    while (t--) {
        int n;
        cin >> n;
        for(int k = 1 ; k<= n ;k++){
         ll kk = k*k;
         ll tt = kk*(kk-1)/2;
         ll att = 0;
         if(k>= 3){
            att=(4*k-4)*(k-2);
         }
         cout<<tt-att<<"\n";
        }
        
    }
    return 0;
}
