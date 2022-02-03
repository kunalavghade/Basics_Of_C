#include<stdio.h>
#include<string.h>

int main()
{
    char s[25];
    printf("Enter the string : ");
    scanf("%s",s);
    int i;
    for(i=0;i<+strlen(s);i++)
    {
        if(s[i]>=65 and s[i]<=90)
            s[i]+=32;
    }

    printf("\nLower case string is : %s",s);

    return 0;
}
