#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int boatSaving(vector<int> vec, int limit) {
    int sum = 0;
    for (auto i : vec) {
        if (i == 0 || i > limit)
            return 0;
        sum += i;
    }
    // Corrected line: Added parentheses around the division operation
    return ceil(static_cast<double>(sum) / limit);
}

int main() {
    vector<int> vec = {1, 2, 3, 5, 3, 1};
    cout << boatSaving(vec, 5); // Output will be printed
    return 0;
}
