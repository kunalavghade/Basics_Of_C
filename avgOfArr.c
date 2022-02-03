#include <stdio.h>

int main()
{
    int n,i;
    float num[100],sum =0,avg;

    printf("Enter the size of arr : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element : ");
        scanf("%f",&num[i]);
        sum += num[i];
    }

    avg = sum / n;

    printf("The average of is %.2f",avg);

    return 0;
}

