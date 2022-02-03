#include <stdio.h>

int main()
{
    int n;
    int r = 0;
    int sum = 0;

    printf("Enter the number to check : ");
    scanf("%d",&n);
    
    int tmp = n;

    while(n)
    {
        r = n%10;
        sum = sum*10+r;
        n/=10;
    }

    if(sum == tmp)
        printf("The Number Is Palindrime !");
    else
        printf("Then Number Is NOT Palindrome !");

    return 0;
}
