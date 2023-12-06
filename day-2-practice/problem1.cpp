#include <iostream>

int main() {
    using namespace std;
// take positive integer input and tell if it is divisible by 5 or not using namespace c++


    int n;

    
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n > 0 and n % 5 == 0) {
        cout << n << " is divisible by 5." << endl;
    } else {
        cout << n << " is not divisible by 5." << endl;
    }

    return 0;
}
