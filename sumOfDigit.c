#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter the number : ");
    scanf("%d",&n);

    int sum =0;
    while(n)
    {
        sum += n%10;
        n /= 10;
    }

    printf("The sum of digits : %d",sum);

    return 0;
}
