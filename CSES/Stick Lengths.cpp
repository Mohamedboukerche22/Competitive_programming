//https://cses.fi/problemset/task/1074/
#include<bits/stdc++.h>
using namespace std;
bool check(vector<long long>& arr){
    set<long long>s(arr.begin(),arr.end());
    if(s.size() == 1){
        return true;
    }
    return false;

}
int main(){
   int n;
   cin >> n;
   vector<long long>arr(n);
   long long  sum  = 0;
   for(int i = 0 ;i<n;i++){
    cin >>arr[i];
    sum += arr[i];

   }
   sort(arr.begin(),arr.end());

   long long  count = 0;
   long long md = arr[n/2];
   for(int i = 0; i< n ;i++){
    if(arr[i] != md){
        count += abs(arr[i] - md);
    }
   }
     cout <<count;

     return 0;

}


