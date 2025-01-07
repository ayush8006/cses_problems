#include <iostream>
#include <string>
using namespace std;

int main() {
    string dna;
    cin >> dna;

    int max_length = 1, current_length = 1;
    for (size_t i = 1; i < dna.length(); i++) {
        if (dna[i] == dna[i - 1]) {
            current_length++;
            max_length = max(max_length, current_length);
        } else {
            current_length = 1;
        }
    }

    cout << max_length << endl;

    return 0;
}
