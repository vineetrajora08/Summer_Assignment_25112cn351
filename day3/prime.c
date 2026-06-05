# include <stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int t=0;
for (int i = 2; i <n; i++)
{ if (n%i==0)
{ t=1; 
    break;}
   }
if (t==1)
{ printf("given number %d is not prime number ",n); 
   }
else{
printf("%d is  a prime number",n);

}
return 0;
}