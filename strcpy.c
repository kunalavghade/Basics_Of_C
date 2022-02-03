#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];
    printf("Enter the string : ");
    scanf("%s",s1);

    int i;
    for(i =0 ;i<strlen(s1);i++)
        s2[i] = s1[i];

    printf("The copy string is '%s'",s2);

    return 0;
}

