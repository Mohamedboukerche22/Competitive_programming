    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin >>t;
        int count =0;
        while(t--){
            int a;
            cin>>a;
            if(a==1){
                count ++;
            }
        }
        if(count>=1){
            cout<<"HARD";
        }else{
            cout <<"EASY";
        }
    }
