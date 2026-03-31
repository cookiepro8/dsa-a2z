#include <iostream>
#include <vector>
#include <string>

using namespace std;

// We change the parameter to 'int' to match what you're passing
int getDigits(int n) {
    // Convert the integer to a string to easily access digits
    string s = to_string(n);
    
    // We can now iterate through the string characters
    // for (char c : s) {
    //     cout << "Digit: " << c << endl;
    // }

    return s.size(); // Returns the number of digits
}

int main() {
    int n = 7789;
    int count = getDigits(n);
    
    cout << "Total digits: " << count << endl;
    return 0;
}