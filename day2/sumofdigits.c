#include <stdio.h>
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; // Add the last digit to the sum
        n /= 10; // Remove the last digit
    }
    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Sum of digits: %d\n", sumOfDigits(number));
    return 0;
}