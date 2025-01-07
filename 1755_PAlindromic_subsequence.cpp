#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    string half = "", middle = "";
    for (auto& p : freq) {
        if (p.second % 2 != 0) {
            if (!middle.empty()) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            middle = p.first;
        }
        half += string(p.second / 2, p.first);
    }

    string result = half + middle;
    reverse(half.begin(), half.end());
    result += half;

    cout << result << endl;
    return 0;
}
