//https://cses.fi/problemset/task/1754/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin >>a>>b;
        if((a+b)%3 == 0 && (min(a,b)*2 >=max(a,b) ) ){
            cout << "YES\n";
        }else{
             cout <<"NO\n";
        }
        

    }
}
