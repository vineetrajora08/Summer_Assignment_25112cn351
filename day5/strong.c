# include<stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
int temp,rem,fact,i;
temp=num;
while(temp>0) {
    rem=temp%10;
    fact=1;
    for(i=1;i<=rem;i++) {
        fact=fact*i;
    }
    sum += fact;
    temp /= 10;
}
    if(sum == num ) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}