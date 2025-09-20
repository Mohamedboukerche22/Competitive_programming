#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long
#define fastAOI ios::sync_with_stdio(false); cin.tie(nullptr);
int cardv(string card){
    if(card =="A"){
        return 11;
    }
    if(card == "K" || card == "Q" || card == "J"){
        return 10;
    } 
    //return string_to_int(card); 
    //it does not existe lol 
    return stoi(card);
}

int main() {
    fastAOI
    int N;
    cin >> N;
    map<int,int> dk = {{2,4},{3,4},{4,4},{5,4},{6,4},{7,4},{8,4},{9,4},{10,16},{11,4}};
    ll sm = 0;
    for(int i=0; i<N; i++){
        string x;
        cin >> x;
        int h = cardv(x);
        sm += h;
        dk[h]--; 
    }
    int l = 0, s = 0;
    for(auto [i, count] : dk){
        if(count == 0)continue;
        // if((s+i) > 21)l+=count;
        if(sm + i > 21)l += count;
        else s += count;
    }

    if(l >= s) cout << "DOSTA\n";
    else cout << "VUCI\n";

    return 0;
}
