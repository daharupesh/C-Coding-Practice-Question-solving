#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number has repeated digits
bool hasRepeatedDigits(int number) {
    vector<bool> digitFound(10, false);
    while (number > 0) {
        int digit = number % 10;
        if (digitFound[digit]) {
            return true;
        }
        digitFound[digit] = true;
        number /= 10;
    }
    return false;
}

// Function to generate numbers with no repeated digits from 4 given digits
void generateNumbers(vector<int>& result, int digits[], int currentNumber, int remainingDigits) {
    if (remainingDigits == 0) {
        result.push_back(currentNumber);
        return;
    }

    for (int i = 0; i < 4; i++) {
        if ((currentNumber == 0 && digits[i] == 0) || hasRepeatedDigits(currentNumber * 10 + digits[i])) {
            continue;
        }
        generateNumbers(result, digits, currentNumber * 10 + digits[i], remainingDigits - 1);
    }
}

int main() {
    int digits[] = { 1, 2, 3, 4 };  // Replace with your desired 4 digits

    vector<int> numbers;
    generateNumbers(numbers, digits, 0, 4);

    cout << "Generated numbers with no repeated digits: ";
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}
