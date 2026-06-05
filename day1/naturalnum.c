#include <stdio.h>
int main(){
 int n,sum;
 printf("enter the number upto you want the sum \n");
 scanf("%d",&n);
 if(n<0){
    printf("the number should be positive");}
    else{
        sum=0;
        for(int i=1;i<=n;i++){
            sum=sum+i;
        }
    }
printf("the sum is equals to %d : ",sum);
return 0;
}
