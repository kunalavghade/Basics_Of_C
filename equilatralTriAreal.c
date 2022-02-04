#include<stdio.h>
#include<math.h>

int main()
{
    int side;
    float area;

    printf("Enter the side : ");
    scanf("%d",&side);

    area = (sqrt(3)/4)*(side*side);

    printf("Area of Triangle : %.2f",area);

    return 0;
}
