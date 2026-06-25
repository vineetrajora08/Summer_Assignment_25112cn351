#include <stdio.h>
int reverse(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse of %d is %d", n, reverse(n));
    return 0;
}