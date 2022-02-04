#include<stdio.h>

int main()
{
    int i;
    for(i = 0;i<100;i++)
    {
        if(i%2)
            continue;
        else
            printf("%d*%d = %d\n",i,i,i*i);
    }
    return 0;
}
