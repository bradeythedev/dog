#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Vector the input will be stored in
    std::vector<char> inputArray;
    
    // Character to store next input character in
    char c;
    // Parse all input, and store in inputAray vector
    while ((c = getchar()) != EOF) {
        inputArray.push_back(c);
    }

    // Print each character in the inputArray vector, in reverse
    // Subtract 1 from inputArray's size because we are using length as an index
    for (int i = (inputArray.size() - 1); i > -1; i--) {
        cout << inputArray.at(i);
    }

    // End line
    cout << endl;

    return 0;
}