// https://cses.fi/problemset/task/3112/
 #include<bits/stdc++.h>
using namespace std;
int main(){
    long long low = 1, max = 1000000000;
    for(int i = 0 ; i <  30 ;i++){
        long long mid = (max + low) / 2;
        cout << "? " << mid << endl;
        cout.flush();
        string ans;
        cin >> ans ;
        if(ans == "YES"){
            low = mid +1;
        } else{
            max = mid ;

        }
    }
    cout <<"! "<< low<<endl;
    cout.flush();
}
