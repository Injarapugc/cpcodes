#include <bits/stdc++.h>

using namespace std;

bool isValidTypeI(const string& addr) {
    stringstream ss(addr);
    string part;
    int count = 0;
    while (getline(ss, part, '.')) {
        if (count >= 4) return false;
        if (part.empty() || part.size() > 3 || (part.size() > 1 && part[0] == '0')) return false;
        for (char c : part) {
            if (!isdigit(c)) return false;
        }
        int num = stoi(part);
        if (num < 0 || num > 255) return false;
        count++;
    }
    return count == 4;
}

bool isValidTypeII(const string& addr) {
    stringstream ss(addr);
    string part;
    int count = 0;
    while (getline(ss, part, ':')) {
        if (count >= 8) return false;
        if (part.empty() || part.size() > 4) return false;
        for (char c : part) {
            if (!isdigit(c) && !((c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))) return false;
        }
        count++;
    }
    return count == 8;
}

string getAddressType(const string& addr) {
    if (isValidTypeI(addr)) {
        return "Type-I";
    } else if (isValidTypeII(addr)) {
        return "Type-II";
    } else {
        return "Invalid";
    }
}

int main() {
    string addr;
    cin >> addr;

    cout << getAddressType(addr) << endl;

    return 0;
}
