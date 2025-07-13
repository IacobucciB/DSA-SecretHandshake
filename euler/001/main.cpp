#include <iostream>

using namespace std;

int sum_of_multiples(int limit) {
    int total_sum = 0;

    for (int x = 0; x < limit; ++x) {
        if (x % 3 == 0 || x % 5 == 0) {
            total_sum += x;
        }
    }

    return total_sum;
}

int main() {
    int result = sum_of_multiples(1000);
    cout << result << endl;
    return 0;
}
