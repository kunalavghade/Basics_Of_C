#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    printf("The factors of number : ");
    int i;
    for(i=1;i<n;i++)
    {
        if(n%i == 0)
            printf("%d\t",i);
    }
    return 0;
}
