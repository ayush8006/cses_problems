#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long total_sum = n * (n + 1) / 2;

    // Check if the total sum is divisible by 2
    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        vector<int> set1, set2;
        long long target = total_sum / 2;
        
        while (n) {
            if (target >= n) {
                set1.push_back(n);
                target -= n;
            } else {
                set2.push_back(n);
            }
            n--;
        }

        // Output the two sets
        cout << set1.size() << endl;
        for (int x : set1) {
            cout << x << " ";
        }
        cout << endl;

        cout << set2.size() << endl;
        for (int x : set2) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
