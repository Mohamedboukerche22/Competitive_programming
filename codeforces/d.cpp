#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >>t;
        int even = 0,odd = 0;
        vector<int>lol(t);
        for(int i:lol){
            cin >>i;
            if(i%2==0){
                even+=i;
            }else if(i%2==1){
                odd+=i;
            }
         }
        if(even>odd){
          cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
    }

    return 0;
}
