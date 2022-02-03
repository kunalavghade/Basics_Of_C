#include<stdio.h>
#include<string.h>

int main()
{
    char s[25];
    printf("Enter the string : ");
    scanf("%s",s);

    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=97 and s[i]<=122)
            s[i] -= 32;
    }

    printf("\nUpper case string : %s",s);
    
    return 0;
}
