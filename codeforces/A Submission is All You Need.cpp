//https://codeforces.com/contest/2130/problem/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int tmp,sum = 0;
       while(n--){cin >>tmp ; sum+=tmp; if(tmp == 0)sum++; tmp = 0;}
       cout << sum<<"\n";
    }
}
