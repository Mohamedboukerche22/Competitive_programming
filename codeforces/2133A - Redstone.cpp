//https://codeforces.com/problemset/problem/2133/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
    int n;
    cin >> n;
    vector<double>arr(n);
    for(int i = 0 ; i < n ;i++){
        cin >> arr[i];
    }
    bool ff = false;
    set<int>s;
    for(auto  g : arr){
        if(s.count(g)){
            
           ff = true;
        }
        s.insert(g);
    }
    if(ff){
        cout << "YES\n";
    }else{
         cout << "NO\n"; 
    }
    }
}
