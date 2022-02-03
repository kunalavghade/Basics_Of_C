#include<stdio.h>

int main()
{
    int n1,n2,n3;
    printf("Enter value of n1 n2 n3 :");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1<n2)
        n1=n2;
    if(n1<n3)
        n1=n3;
 
    printf("the largest number is %d",n1);

    return 0;
}
