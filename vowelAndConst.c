#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter the string : ");
    gets(s);

    int vowel = 0, constant = 0,i = 0;

    while(s[i]!='\0')
    {
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='i' or s[i]=='O' or s[i]=='U')
            vowel++;
        else
            constant++;
        i++;
    }
    printf("'%s' has %d vowels and %d constant ",s,vowel,constant);
    return 0;
}
