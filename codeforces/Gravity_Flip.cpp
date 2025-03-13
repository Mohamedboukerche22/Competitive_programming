#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >>t;
  vector <int> lol;
  while(t--){
    int l;cin>>l;
   lol.push_back(l);
  }
  sort(lol.begin(),lol.end());
  for (auto i:lol){
    cout <<i<<" ";
  }
 
}
