#include <stdio.h>
int main(){
printf("Enter a number: ");
int x;
scanf("%d",&x);
int n;
printf("Enter the power: ");
scanf("%d",&n);
int result = 1;
while (n > 0) {
    result *= x;
    n--;}
printf("The result of %d raised to the power of %d is: %d\n", x, n, result);
return 0;
}