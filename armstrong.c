#include <stdio.h>

int main()
{
    int n,sum = 0,r;
    
    printf("Enter the number to check : ");
    scanf("%d",&n);

    int tmp = n;
    while(n)
    {
        r = n%10;
        sum += (r*r*r);
        n/=10;
    }
    if(tmp == sum)
        printf("The number is armstrong");
    else
        printf("The number is NOT armstrong");

    return 0;
}
