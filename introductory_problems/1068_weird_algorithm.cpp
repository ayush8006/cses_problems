#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    while (true) {
        cout << n;
        if (n == 1) break;
        cout << " ";
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }
    cout << endl;

    return 0;
}
