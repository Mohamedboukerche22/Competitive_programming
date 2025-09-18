//https://cses.fi/problemset/task/1618/
// to solve this problem we should find the number of zeros in a factorial of n num but it wont work if u calcule all nums factorial
// so there is a short way which is calc  the sum of for{1..n} if number/5¹ != 0 add it to the sum the n move to number/5² .... unitle number/5⁹ == 0 then break it and return the previous sum
#include<bits/stdc++.h>
using namespace std;
long long f(int n){
    vector<int>dp;
    int sum = 0;
    for(int i = 1 ; i<  n;i++){
        int nn = n/(pow(5,i));
        if(nn>0){
        sum += nn;
        }else{
            break;
        }
    }
    return sum;
}
long long factorial(int n){
    vector<long long >dp(n+1);
    dp[0] = 1;
    for(int i = 1 ; i<= n ;i++){
      dp[i] = dp[i-1]*(i+1);
    }
    return dp[n-1];
}
int main(){
    int n;
    cin >> n;
    cout <<f(n);
}
