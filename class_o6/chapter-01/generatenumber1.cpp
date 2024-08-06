#include <iostream>
using namespace std;

// Function to check if a number has repeated digits
bool hasRepeatedDigits(int number) {
    bool digitFound[10] = { false };
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

int main() {
    int n;
    cout<<"Enter array input:\n";
    cin>>n;
    int digits[n];
   
    for(int i=0;i<n;i++){
        cin>>digits[i];
    }
     // Replace with your desired 4 digits

    cout << "Generated numbers with no repeated digits: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            for (int k = 0; k < n; k++) {
                if (k == i || k == j) continue;
                for (int l = 0; l < n; l++) {
                    if (l == i || l == j || l == k) continue;
                    int number = digits[i] * 1000 + digits[j] * 100 + digits[k] * 10 + digits[l];
                    if (!hasRepeatedDigits(number)) {
                        cout << number << " ";
                    }
                }
            }
        }
    }
    cout << endl;

    return 0;
}
