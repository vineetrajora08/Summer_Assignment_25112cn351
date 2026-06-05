#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the range: ");
    scanf("%d \n %d",&a,&b);
    printf("Prime numbers between %d and %d are: ",a,b);
    for (int i = a; i <= b; i++)
    {   int t=0;
        for (int j = 2; j <i; j++)
        { if (i%j==0)
        { t=1; 
            break;}
        }
        if (t==0 && i>1)
        { printf("%d ",i); 
        }
    }
    return 0;
}