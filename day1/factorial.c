# include <stdio.h>
int main(){
    int n;
            int fact=1;
    printf("enter the number which you want the factorial \n");
    scanf("%d",&n); 
    if(n<0){
        printf("the number should be positive");
    }
    else{
      
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }}
        printf("the factorial of %d is %d",n,fact);
        return 0;
    }