//https://cses.fi/problemset/task/1622/
#include<bits/stdc++.h>
using namespace std;
long long factorial(int n){
    vector<long long>dp(n+1);
    dp[0] =1;
    for(long long i = 1 ; i<=n ;i++){
      dp[i] = dp[i-1]*(i+1);
    }
    return dp[n-1];
}
int search(vector<pair<char,int>> & a,char t){
   for(int i = 0; i<  a.size() ;i++){
    if(a[i].first == t){
        return i;
    }
   }
   return -1;
}
int main(){
    string n;
    cin >>n;
    vector<pair<char,int>>a;
    /*set<char>s;
    for(char i : n){
        if(search(a,i) == -1){
            a.push_back({i,1});
        }else{
            a[search(a,i)].second++;
        }

        s.insert(i);
    }
    int calc = 1;
    for(auto i : a){
        calc *= factorial(i.second);
    }*/
    /*int per = factorial(n.length())/(calc);
    cout << per<<"\n";
    int count = 0;*/
    vector<string>ss;
    int count = 0;
    
    sort(n.begin(),n.end());
        while(next_permutation(n.begin(),n.end())){
         ss.push_back(n);
         count++;
        }
        cout <<count+1<<"\n";
        cout <<n<<"\n";
        for(string i : ss){
            cout << i<<"\n";
        }


    //rule math  n!/f1!*f2!..

}
