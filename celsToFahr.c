#include<stdio.h>
/*
 *  Formula
 *      T(F) = T(C) x 9 / 5 + 32 = c * 1.8 + 32
 * */
int main()
{
    float f,c;
    printf("Enter Celsius : ");
    scanf("%f",&c);

    f = c * 1.8 + 32;

    printf("Fahrenheit : %.2f",f);

    return 0;
}
