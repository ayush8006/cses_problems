#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    for (long long k = 1; k <= n; k++) {
        // Total ways to place two knights
        long long total = (k * k) * (k * k - 1) / 2;
        // Ways where knights can attack each other
        long long attack = 4 * (k - 1) * (k - 2);
        // Valid configurations
        cout << total - attack << endl;
    }

    return 0;
}
