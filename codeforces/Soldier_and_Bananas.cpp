#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int cost = 0;
    for(int i=0;i<c+1;i++){
        cost = a*i+cost;
    }
    if(b<cost){
    cout <<abs(b-cost);
}else{
    cout<<0;
}

}
