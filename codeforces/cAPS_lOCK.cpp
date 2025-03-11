#include<bits/stdc++.h>
using namespace std;

string to(const string& word) {
    bool allUpper = true;
    for (char ch : word) {
        if (!isupper(ch)) {
            allUpper = false;
            break;
        }
    }
    if (allUpper) {
        string result;
        for (char ch : word) {
            result += tolower(ch);
        }
        return result;
    }
    bool f = islower(word[0]);
    if (f) {
        for (size_t i = 1; i < word.length(); ++i) {
            if (!isupper(word[i])) {
                f = false;
                break;
            }
        }
    }
    if (f) {
        string result;
        result += toupper(word[0]);
        for (size_t i = 1; i < word.length(); ++i) {
            result += tolower(word[i]);
        }
        return result;  
     }
    return word;
}

int main() {
    string word;
    cin >> word; 
    cout << to(word) << endl;
    return 0;
}
