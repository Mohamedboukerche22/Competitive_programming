#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  a,b,c;
    cin>>a>>b>>c;
    vector <long long> lol;
    lol.push_back(a+(b*c));
    lol.push_back(a*(b+c));
    lol.push_back(a*b*c);
    lol.push_back((a+b)*c);
    lol.push_back(a+b+c);
    long long h = *max_element(lol.begin(),lol.end());
    cout << h;

}
