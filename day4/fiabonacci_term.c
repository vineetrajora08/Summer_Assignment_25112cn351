# include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    int term;
    printf("Enter the term number: ");
    scanf("%d", &term);
    if(term==0){
    printf("The %dth term of the Fibonacci series is: %d", term, a);
    }
    else if(term==1){
        printf("The %dth term of the Fibonacci series is: %d", term, b);
    }
    else{
        for (int i = 2; i <= term; i++) {
            c = a + b;
            a = b;
            b = c;
            
        }
    printf("The %dth term of the Fibonacci series is: %d", term, a);}
    return 0;
}