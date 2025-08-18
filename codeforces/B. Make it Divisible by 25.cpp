// https://codeforces.com/problemset/problem/1593/B
#include<bits/stdc++.h>
using namespace std;

//vector<int>dp(N);
string str(long long n){
    string nn = to_string(n);
    return nn;
}
int divo(long long n){
    int ans = INT_MAX; 
    string nn = str(n);
    vector<string>ends ={"00","25","50","75"};

    for(auto end : ends){
    int count = 0 ;
    int j = (int)end.size() - 1;
    for (int i = (int)nn.size() - 1; i >= 0 && j >= 0; i--){
            if (nn[i] == end[j]) j--;
            else count++;
        }
        if (j < 0) ans = min(ans, count);
    }
    return (ans == INT_MAX ? -1 : ans);
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        long long n;
        cin >> n;
        int res = divo(n);
        cout << (res == -1 ? 0 : res) << '\n';
    }
}
