#include<stdio.h>

int main()
{
    int n1, n2;
    printf("Enter the numbers : ");
    scanf("%d %d",&n1,&n2);

    int minMult = (n1>n2)?n1:n2;

    while(1)
    {
        if(minMult%n1 == 0 and minMult%n2==0)
        {
            printf("\nThe LCM of %d and %d is %d",n1,n2,minMult);
            break;
        }
        minMult++;
    }

    return 0;
}
