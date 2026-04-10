#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



string maxXorValue(string x, int k) {
    string ans(x.length(),'0');
    for(int i=0;i<(int)x.length();i++){
        if(x[i]=='1'){
            //shit
        }else{
            if(k>0){
              ans[i]='1';
              k--;
            }
        }
       
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string k_temp;
        getline(cin, k_temp);

        int k = stoi(ltrim(rtrim(k_temp)));

        string y = maxXorValue(s, k);

        fout << y << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
