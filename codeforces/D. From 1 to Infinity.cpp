//https://codeforces.com/problemset/problem/2132/D
// work but not full ac
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
ll t;
cin >>t;
while(t--){ll n,sum = 0,len = 1,cnt = 9,start = 1;cin >>n;
while(len*cnt <n){
for(ll i=start;i<start+cnt;i++){
 ll tmp = i;
 while(tmp > 0){
 sum += tmp%10; tmp /=10;}
 } 
 n-=len*cnt;
 len++;
 start *=10;
 cnt *=10;
}
ll in = (n-1)/len;
ll d = (n-1)%len;
ll num = start + in;
for(ll i=start; i < start + in;i++){
 ll tmp = i;
 while(tmp > 0){sum += tmp%10; tmp /=10;}
}
string s = to_string(num);
for(int i = 0; i <= d;i++){sum += s[i]-'0';}
cout << sum<<"\n";
          }
}
