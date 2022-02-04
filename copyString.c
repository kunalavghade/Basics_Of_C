#include<stdio.h>


int main()
{
    char s1[50],s2[8];
    printf("Enter the string : ");
    scanf("%s",s1);

    int i;
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i] = s1[i];
    }
    
    s2[i] = '\0';

    printf("the S1 : %s",s1);
    printf("\nthe S2 : %s",s2);

    return 0;
}
