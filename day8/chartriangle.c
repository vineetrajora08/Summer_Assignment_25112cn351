#include<stdio.h>
int main(){
int row;
printf("enter number of rows: ");
scanf("%d",&row);
for (char i = 65; i < 65+row; i++)
{for (char j = 65; j < i; j++)
{
    printf("%c",j);
}
 printf("\n");
}
return 0;

}