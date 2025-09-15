//https://codeforces.com/problemset/problem/2127/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0 ; i<  n;i++)cin >>a[i];
    set<int>s(a.begin(),a.end());
    s.erase(-1);

    if(s.size()<=1 &&!s.count(0)){
        cout <<"YES\n";
    }else{
        cout <<"NO\n";
    }
    }

}
