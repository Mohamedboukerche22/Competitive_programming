#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int S,R;
    cin >> S >>R;
    long long SS = S*S;
    if (R*R*pi>=SS){
        cout<<"CIRCLE"<<"\n";
    }else{
        cout<<"SQUARE"<<"\n";
    }


    return 0;
}
