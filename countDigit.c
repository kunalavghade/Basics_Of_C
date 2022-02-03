#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int count = 0;
    int num = n;
    while(n)
    {
        n/=10;
        count++;
    }
    printf("The number %d has %d digits",num,count);
    return 0;
}
