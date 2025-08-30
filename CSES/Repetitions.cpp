//https://cses.fi/problemset/task/1069/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string ss;
    cin >> ss;
    int maxa = 0;
    int tt = 0;
    for(int i = 1 ; i< ss.length() + 1 ;i++){
        if(ss[i] == ss[i-1]){
            tt++;
        }
        else{
            if(tt > maxa){
                maxa = tt;
            }
            tt = 0;
        }
    }
    cout << maxa + 1 ;
}
