#include<stdio.h>

int main()
{
    int base,height,area;
    
    printf("Enter Base ");
    scanf("%d",&base);

    printf("Enter height ");
    scanf("%d",&height);
    
    area = (height*base)/2;
    
    printf("Area : %d",area);
    return 0;
}
