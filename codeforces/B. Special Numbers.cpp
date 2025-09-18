//https://codeforces.com/problemset/problem/1594/B
#include <bits/stdc++.h>
//#include <boost/dynamic_bitset.hpp>
using namespace std;
const int MAXA = 1e9;
const int MOD = 1e9 +7;

#define ll long long
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);


string bin(int x){
    string binary = "";
    while(x > 0){
        binary += char('0' +(x&1));
        x >>= 1;
    }
    //reverse(binary.begin(),binary.end());
    return binary;
}
ll power(ll n, ll k){
    ll ans = 1;
    while(k > 0){
        if(k & 1){
            ans = (ans*n)%MOD;
        }
        n = (n*n)%MOD ;
        k >>= 1;
    }
    return ans;

}

int main() {
    fastAOI;
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >>k;
        string bina = bin(k);
        ll sum = 0;
        int count = 0;
        for(char i : bina){
            sum += (i - '0')*power(n,count);
            count++;
        }
        cout << sum%MOD<<"\n";
        

    }
    return 0;
}
