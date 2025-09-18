//https://cses.fi/problemset/task/2205/
#include<bits/stdc++.h>
using namespace std;
void gray_code(int n){
    for(int i = 0 ; i<(1<<n);i++){
        bitset<32> r((i ^ (i >> 1)));
        string s = r.to_string();
        cout << s.substr(32 - n) << "\n";
    }
}
int main(){
    int n;
    cin >> n;
    gray_code(n);
}
