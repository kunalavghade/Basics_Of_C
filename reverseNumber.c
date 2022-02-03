#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    
    int rev=0;

    while(n)
    {
        rev = ((rev*10)+(n%10));
        n/=10;
    }

    printf("The reversed number is : %d",rev);

    return 0;
}
