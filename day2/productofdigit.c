#include<stdio.h>
int main(){
int n, product = 1, rem;
printf("Enter a number: ");
scanf("%d", &n);
while (n > 0) { 
rem = n % 10; // Get the last digit
product *= rem; // Multiply the last digit to the product
n /= 10; // Remove the last digit
}
printf("Product of digits: %d\n", product);
return 0;
}