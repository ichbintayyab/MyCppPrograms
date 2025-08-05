#include <iostream>
#include <limits>
#include <cfloat> // Add this line for FLT_MIN
using namespace std;

int main() {
    // Overflow example
    int maxInt = INT_MAX;
    cout << "Max int: " << maxInt << endl;
    maxInt = maxInt + 1; // Causes overflow
    cout << "After overflow: " << maxInt << endl;

    // Underflow example
    float minFloat = FLT_MIN;
    cout << "Min float: " << minFloat << endl;
    minFloat = minFloat / 10.0f; // Causes underflow
    cout << "After underflow: " << minFloat << endl;

    return 0;
}

