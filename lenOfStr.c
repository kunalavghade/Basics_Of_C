#include<stdio.h>
#include<string.h>

int main()
{
    char s[25];
    printf("Enter the String : ");
    scanf("%s",s);
    
    int i;
    for(i=0;s[i]!='\0';i++);

    printf("The length of string is %d",i);

    return 0;
}
