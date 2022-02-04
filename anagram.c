#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "recitals";
    char s2[] = "articlaes";

    int n1 = strlen(s1);
    int n2 = strlen(s2);

    if(n1 != n2)
    {
        printf("The strings not anagram");
        return 0;
    }

    int i,j,tmp;
    for(i=0;i<n1-1;i++)
    {
        for(j=0;j<n1-i-1;j++)
        {
            if(s1[j]>s1[j+1])
            {
               tmp = s1[j];
               s1[j] = s1[j+1];
               s1[j+1] = tmp;
            }
            
            if(s2[j]>s2[j+1])
            {
               tmp = s2[j];
               s2[j] = s2[j+1];
               s2[j+1] = tmp;
            }
        }
    }

    for(i=0;i<n1;i++)
    {
        if(s1[i]!=s2[i])
        {
            printf("The strings not anagram");
            return 0;
        }
    }

    printf("The strings are anagram");

    return 0;
}
