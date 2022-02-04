#include<stdio.h>

int main()
{
    char s[50];
    printf("Enter the string : ");
    gets(s);

    int i;
    for(i = 0;strlen(s);i++)
    {
        if(s[i]>='a' and s[i]<='z')
            s[i] -= 32;

        else if(s[i]>='A' and s[i]<='Z')
            s[i] += 32;

    }

    printf("the toggled string : %s",s);

    return 0;
}
