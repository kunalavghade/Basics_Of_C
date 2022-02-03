#include<stdio.h>

int main()
{
    int n1 = 0;
    int n2 = 1;
    int n3 = 0;
    int number = 0;
    int i;

    printf("Enter the range of fibonacci : ");
    scanf("%d",&number);

    printf("\t%d\t%d\t",n1,n2);
    for(i = 2;i<number;++i)
    {
        n3 = n1+n2;
        printf("%d\t",n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
