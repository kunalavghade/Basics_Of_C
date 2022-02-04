#include<stdio.h>

int main()
{
    FILE* fp = fopen("fileRead.c","r");
    char c = 0;
    if(fp)
    {
        while((c=fgetc(fp))!=EOF)
            printf("%c",c);
        fclose(fp);
    }
    else
        printf("Opening failed\n");
    puts("");

    return 0; 
}
