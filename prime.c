#include<stdio.h>

int main()
{
    int n,i,m=0;

    printf("Enter the number to check : \n");
    scanf("%d",&n);

    m = n/2;

    for(i=2;i<=m;i++)
    {
        if(n%i == 0)
        {
            printf("Number is NOT prime\n");
            return 0;
        }
    }
    printf("Number is prime\n");
    return 0;
}
