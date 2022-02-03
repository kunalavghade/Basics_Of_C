#include<stdio.h>

int main()
{
    int a = 10,b = 20;
    
    printf("\nThe Number Before Swap (a = %d,b = %d)",a,b);

    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("\nThe Number After Swap (a = %d,b = %d)",a,b);
    
    return 0;
}
