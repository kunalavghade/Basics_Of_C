#include<stdio.h>

int main()
{
    int num,bit;
    
    printf("Enter the number : ");
    scanf("%d",&num);

    printf("Enter the bit (0-31) : ");
    scanf("%d",&bit);
    
    printf("the bit is at %d is %d",bit,((num>>bit)&1));

    return 0;
}
