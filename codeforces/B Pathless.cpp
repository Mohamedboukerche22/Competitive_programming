//https://codeforces.com/contest/2130/problem/B
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tt;
    cin >> tt;
    while(tt--){
    
    int n, s, tmp;
    
    cin >> n >> s;
    
    vector<int> a(3);
    
    for(int i=0; i<n; i++){
        cin >> tmp; a[tmp]++;
        
    }
    if(s == a[1] + 2*a[2] || s >= a[1] + 2*a[2] + 2){
        cout << -1 << '\n';
        continue;
        
    }
    for(int i=0; i<a[0]; i++) cout << 0 << ' ';
    for(int i=0; i<a[2]; i++) cout << 2 << ' ';
    for(int i=0; i<a[1]; i++) cout << 1 << ' ';
    cout << '\n';
    }
}
