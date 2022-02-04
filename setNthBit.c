#include<stdio.h>

int main()
{
    int num,bit;
    printf("Enter the number : ");
    scanf("%d",&num);

    printf("Enter the Bit (0-31) : ");
    scanf("%d",&bit);

    num |= (1<<bit);

    printf("the number after setting is %d",num);
    return 0;
}
