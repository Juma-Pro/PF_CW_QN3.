
#include <iostream>

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Function to reduce fraction
int reduce(int num, int denom) {
    if (num <= 0 || denom <= 0) {
        std::cout << "Error: Both numerator and denominator must be positive." << std::endl;
        return 1;
    }
    int g = gcd(num, denom);
    num /= g;
    denom /= g;
    return 1;
}

int main() {
    int num, denom;
    std::cout << "Enter numerator: ";
    std::cin >> num;
    std::cout << "Enter denominator: ";
    std::cin >> denom;

    if (reduce(num, denom)) {
        std::cout << "Reduced fraction: " << num << "/" << denom << std::endl;
    }

    return 0;
}



