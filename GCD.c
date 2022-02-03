#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Enter the numbers : ");
    scanf("%d %d",&n1,&n2);
    
    int i, gcd;

    for(i=1;i<=n1 and i<=n2;i++)
    {
        if(n1%i == 0 and n2%i == 0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d",n1,n2,gcd);

    return 0;
}
