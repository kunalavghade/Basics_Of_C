#include<stdio.h>

int main()
{
    int num,bit;
    printf("Enter the number : ");
    scanf("%d",&num);

    printf("Enter the bit (0-31) : ");
    scanf("%d",&bit);

    num ^= (1<<bit);

    printf("The number after toggling bit is %d",num);
    return 0;
}
