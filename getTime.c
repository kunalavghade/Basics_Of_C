#include<stdio.h>
#include<time.h>

int main()
{
    time_t t;
    t = time(NULL);
    printf("%s",asctime(localtime(&t)));
    return 0;
}

