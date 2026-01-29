//guess number
#include <bits/stdc++.h>
using namespace std;
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
const int N = 2e5 +1;
 
void solve(){
    
   int a = 1,b = 1000000;
   bool found = false;
   while(a < b){
    int m = (a+b+1)/2;
    cout << m <<endl;
    string ans;
    cin >>ans;
    
    if(ans == "<")
    {
      b = m-1;

    }
    else
    {
      a = m;
    }

   }
   cout <<"! " << a << endl;
 
   
}
 
int main() {
    //fastAOI;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
