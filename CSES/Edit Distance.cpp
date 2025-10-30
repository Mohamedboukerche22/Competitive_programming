//https://cses.fi/problemset/task/1639/
#include <bits/stdc++.h>
using namespace std;

#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()

int edit(string &str1, string &str2){
    int n = str1.length();
    int m = str2.length();
    vector<int>prev(m+1,0);
    vector<int>curr(m+1,0);
    for(int i = 0 ; i <= m ;i++){
        prev[i] = i;
    }
    for(int i = 1 ; i <= n ;i++){
        curr[0] = i;
        for(int j = 1 ; j <= m ;j++){
            if(str1[i-1] == str2[j-1]){
                curr[j] = prev[j-1];
            }else{
                curr[j] = 1 + min({prev[j],
                    curr[j-1],
                    prev[j-1]});
            }

        }
        prev = curr;
    }
    return prev[m];
}

int main() {
    fastAOI;
    int t = 1;
    // cin >> t;
    while (t--) {
        string str1,str2;
        cin >>str1>>str2;
        cout<<edit(str1,str2);
    }
    return 0;
}
