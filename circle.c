#include<stdio.h>

int main()
{
    float redius, diameter, cicumference, area;
    float pi = 3.1415;

    printf("Enter redius : ");
    scanf("%f",&redius);

    diameter = 2*redius;
    cicumference = 2*pi*redius;
    area = pi*redius*redius;

    printf("Diameter : %.8f",diameter);
    printf("\nCicumference : %.8f",cicumference);
    printf("\nArea : %.8f",area);

    return 0;
}
