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
        string str;
        cin.ignore();
        getline(cin,str);
        vector<pair<char,int>> chars;
        int j = 0; 
        for (char c : str) {
            if ('A' <= c && c <= 'Z') { 
                if (j < n) chars.pb({c, fibo[j]}); j++;
            }
        }
    sort(chars.begin(), chars.end(), [](auto &a, auto &b){
    return a.second < b.second;});
    ll mx = *max_element(all(fibo));
    
    ll mxdp = find(all(dp), mx) - dp.begin();
    vector<char>ans(mxdp+2,' ');
    int g = 0;
    for(int i = 0 ; i <= mxdp && g<sz(chars);i++){
        if((chars[g].second) == dp[i]){
            ans[i] = chars[g].first;g++;
        }  
    }
        string out(ans.begin(), ans.end());
        while (!out.empty() && out.back() == ' ') out.pop_back();
        cout << out << "\n";     
    }
    return 0;
}
