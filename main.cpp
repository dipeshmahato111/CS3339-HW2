#include <iostream>
#include <bitset>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {

    // Check for correct number of arguments
    if (argc != 3) {
        cout << "Error: Please provide exactly 2 arguments" << endl;
        return 1;
    }

    // Convert inputs
    float num1 = atof(argv[1]);
    float num2 = atof(argv[2]);

    // Print input values
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    // Convert to IEEE 754 bit representation
    bitset<32> bits1(*(int*)&num1);
    bitset<32> bits2(*(int*)&num2);

    cout << "Bits (num1): " << bits1 << endl;
    cout << "Bits (num2): " << bits2 << endl;

    // Overflow detection
    if (num1 + num2 == num1) {
        cout << "Warning: Possible overflow!" << endl;

        // Find threshold (temporary loop-based method)
        float temp = num1;

        while (temp + num2 != temp) {
            temp *= 2;
        }

        cout << "Overflow threshold: " << temp << endl;

        bitset<32> thresholdBits(*(int*)&temp);
        cout << thresholdBits << endl;

    }
    else {
        cout << "No overflow!" << endl;
    }

    return 0;
}
