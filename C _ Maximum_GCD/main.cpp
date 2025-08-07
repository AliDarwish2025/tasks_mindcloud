#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> numbers(t);
    for (int i = 0; i < t; i++) {
        cin >> numbers[i];
    }
    //the maximum possible greatest common divisor of integers in pair .
    for (int i = 0; i < t; ++i) {
        cout << numbers[i] / 2 << endl;
    }

    return 0;
}
