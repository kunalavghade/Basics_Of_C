#include<stdio.h>

int main()
{
    char a;
    while(1)
    {
        printf("(Y)es (N)o or (Q)uit\n");
        printf("Enter choise : ");
        scanf("%c",&a);

        if(a == 'q' or a == 'Q')
            break;
    }
    return 0;
}
