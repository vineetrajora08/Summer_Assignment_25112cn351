#include <stdio.h>
int main(){
int a[10],n,rev,i;
printf("enter number of elements\n");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
printf("reverse array is \n");
for ( i = n-1;i>=0; i--)
{
    printf("%d",a[i]);
}


return 0;
}