#include <stdio.h>
int main(){
int start,end,num,temp,remainder,digits,sum;
printf("Enter the starting number: ");
scanf("%d",&start);
printf("Enter the ending number: ");
scanf("%d",&end);
printf("Armstrong numbers between %d and %d are: ",start,end);
for(num=start;num<=end;num++){
temp=num;
digits=0;   
sum=0;
while (temp!=0)
{ digits++;
temp/=10;
}
temp=num;
while (temp!=0)
{remainder=temp%10;
sum+=pow(remainder,digits);
temp/=10;}
temp=num;
if (temp==sum)
printf("%d ",temp);
}
return 0;
}