#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50],s2[25];
    
    printf("Enter first String : ");
    scanf("%s",s1);

    printf("Enter second String : ");
    scanf("%s",s2);

    int i,j;
    for(i=0; s1[i] != '\0'; i++);

    for(j=0; s2[j] != '\0'; j++)
        s1[i+j]=s2[j];

    s1[i+j]='\0';

    printf("The combined string : %s",s1);

    return 0;
}
