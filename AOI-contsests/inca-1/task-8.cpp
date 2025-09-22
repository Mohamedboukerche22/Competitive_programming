#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
const int N = 50;


int main() {
    fastAOI;
    vector<long long>dp(N);
    dp[0] = 1;
    dp[1] = 2;
    for(long long i= 2 ; i< N;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    int t ;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>fibo(n);
        for(int &i : fibo){
            cin >> i;
        }
        //vector<pair<int,char>>ar(n);
        string str;
        cin.ignore();
        getline(cin,str);
       /* vector<char>arr;
        for(char i : str){
            arr.pb(i);
        }*/
        vector<pair<char,int>> chars;
        int j = 0; 
        for (int i = 0; i < (int)str.size(); i++) {
          if (str[i] == ' ' || str[i] == ',') continue; 
          if (j < (int)fibo.size()) {
         chars.push_back({str[i], fibo[j]}); j++;
            }
         }
         //sort(chars.begin(), chars.end());
    sort(chars.begin(), chars.end(), [](auto &a, auto &b){
    return a.second < b.second;
    });
    vector<char>ans;
    int g = 0;
    for(int i = 0 ; i <= n+1;i++){
        if((chars[g].second) == dp[i]){
            ans.pb(chars[g].first);
            g++;
        }else{
            ans.pb(' ');
        }
    }
    for(char i :ans){
        cout <<i;
    }
    cout <<"\n";

    /*for(int i = 0 ; i< chars.size();i++){
        cout <<chars[i].first<<" : "<<chars[i].second<<endl;
    }*/

       
    }
    return 0;
}
