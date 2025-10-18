//https://codeforces.com/contest/2064/problem/A
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()

int main() {
    fastAOI;
    int t = 1;
     cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for(int i = 0 ; i< n-1 ;i++){
            if(s[i] != s[i+1]){
               count++;
            }
        }
        if (s[0] == '1')count++;
            
        cout << count<<"\n";
        
    }
    return 0;
}
