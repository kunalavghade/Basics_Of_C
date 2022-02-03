#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    printf("Enter the number : ");
    scanf("%s",name);

    printf("The reversed string %s",strrev(name));

    return 0;
}
