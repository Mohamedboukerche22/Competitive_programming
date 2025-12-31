//https://codeforces.com/contest/1996/problem/A
 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        while(n >0){
            if(n>=4){
                n -= 4;
                count++;
            }else{
                n -= 2;
                count++;
            }
        }
        cout <<count<<"\n";
        
        
        
    }
    
    
 
    return 0;
}
