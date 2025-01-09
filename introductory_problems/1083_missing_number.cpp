#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 0, total = 1LL * n * (n + 1) / 2;

    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        sum += x;
    }

    cout << total - sum << endl;

    return 0;
}
