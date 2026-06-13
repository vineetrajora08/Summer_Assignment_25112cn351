# include <stdio.h>
int main() {
    int num, i, largestFactor = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            largestFactor = i;
        }
    }
    
    printf("The largest prime factor of %d is %d.\n", num, largestFactor);

    return 0;
}