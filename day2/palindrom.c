# include<stdio.h>
int main(){
int n, rev = 0, rem;
printf("Enter a number: ");
scanf("%d", &n);
while (n > 0) {
rem = n % 10; // Get the last digit
rev = rev * 10 + rem; // Append the last digit to the reversed number
n /= 10; // Remove the last digit
}
if (rev == n) {
    printf("The number is a palindrome.\n");
} else {
    printf("The number is not a palindrome.\n");}
return 0;   
}