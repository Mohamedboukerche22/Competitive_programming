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

//the solution 
#include <bits/stdc++.h>
 
using namespace std;
using ll = long long ;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        ll k;
        cin >> k;
        ll cur = 9, len = 1;
        while (k - cur * len > 0) {
            k -= cur * len;
            cur *= 10;
            len++;
        }
        string s = to_string(cur / 9 + (k - 1) / len);
        ll ans = 0;
        for (int i = 0; i < (k - 1) % len + 1; i++)ans += s[i] - '0';
        ll gg = 0;
        for (int i = 0; i < s.length(); i++) {
            int c = s[i] - '0';
            if (c)
                ans += c * (len - 1) * cur / 2 + c * (2 * gg + c - 1) / 2 * cur / 9;
            cur /= 10, len--;
            gg += c;
        }
        cout << ans << '\n';
    }
    
    return 0;
}





