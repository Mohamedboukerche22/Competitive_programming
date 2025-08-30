//https://cses.fi/problemset/task/1070/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int>even,odd; 
    if (n == 1){
        cout << 1;
        return 0;
    }
    if (n <= 3){
        cout << "NO SOLUTION";
        return 0;
    }
    else{
        for(int i = 1 ; i <= n  ;i++){
            if (i%2 == 0){
                even.insert(i);
            }
            else{
                odd.insert(i);
            }
        }

        for(int i : even){
            cout << i<<" ";
        }
        for(int i : odd){
            cout <<i<<" ";
        }

    }
}
