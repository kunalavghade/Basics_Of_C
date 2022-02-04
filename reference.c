#include<stdio.h>

void inc1(int val)
{
    val++;
}

void inc2(int *val)
{
    (*val)++;
}

int main()
{
    int a = 0;
    inc1(a);
    printf("a = %d\n",a);
    inc2(&a);
    printf("a = %d\n",a);
    return 0;
}
