#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

struct BigInt {
    static const int base = 1000000000;
    vector<int> a;

    BigInt(long long v = 0) { *this = v; }

    BigInt& operator=(long long v) {
        a.clear();
        if (v == 0) return *this;
        while (v) {
            a.push_back(v % base);
            v /= base;
        }
        return *this;
    }

    friend ostream& operator<<(ostream& os, const BigInt& v) {
        if (v.a.empty()) return os << 0;
        os << v.a.back();
        for (int i = (int)v.a.size() - 2; i >= 0; i--)
            os << setw(9) << setfill('0') << v.a[i];
        return os;
    }

    BigInt operator*(int v) const {
        BigInt res;
        long long carry = 0;

        for (size_t i = 0; i < a.size() || carry; i++) {
            long long cur = carry;
            if (i < a.size()) cur += 1LL * a[i] * v;

            res.a.push_back(cur % base);
            carry = cur / base;
        }

        while (!res.a.empty() && res.a.back() == 0)
            res.a.pop_back();

        return res;
    }
};

BigInt factorial(int n) {
    BigInt res = 1;
    for (int i = 2; i <= n; i++) {
        res = res * i;
    }
    return res;
}

void extraLongFactorials(int n) {

  cout<< factorial(n);
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

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
