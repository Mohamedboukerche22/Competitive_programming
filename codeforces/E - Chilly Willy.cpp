//https://codeforces.com/group/cUZnNK1B7y/contest/589030/problem/E
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    if(n < 3){
        cout <<-1<<"\n";
    }
    else if(n == 3){
        cout <<210;
    }
    else{
         cout << "1";
        for (int i = 0; i < n - 4; i++)
            cout << "0";
        if ((n - 4) % 6 == 0)
            cout << "050";
        else if ((n - 4) % 6 == 1)
            cout << "080";
        else if ((n - 4) % 6 == 2)
            cout << "170";
        else if ((n - 4) % 6 == 3)
            cout << "020";
        else if ((n - 4) % 6 == 4)
            cout << "200";
        else
            cout << "110";
    }
}
