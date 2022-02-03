#include<stdio.h>
/*
 * the number whose sum of digite factorial is that number
 * Ex 145 = 1! + 4! + 5!
 */

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    int sum = 0,r;
    int tmp = num;
    int i,f = 1;
    while(num)
    {
        f = 1;
        r = num % 10;
        for(int i = 1;i<=r;i++)
            f *= i;
        sum +=f;
        num/=10;
    }

    if(sum == tmp)
        printf("%d is strong number",tmp);
    else
        printf("%d is NOT strong number",tmp);

    return 0;
}
