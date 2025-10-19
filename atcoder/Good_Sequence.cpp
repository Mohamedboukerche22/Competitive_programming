//hiii
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >>n;
   unordered_map<int,int> lol;
   for(int i = 0;i <n;i++){
      int c;
      cin >>c;
      lol[c]++;  
   }
   int count = 0;
   for(auto &i : lol){
      if(i.second > i.first){
         count += i.second - i.first;
      }else if (i.first > i.second){
         count += i.second;
      }

   }
   cout << count << endl;

}
