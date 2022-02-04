#include<stdio.h>

int main()
{
    FILE *fp = fopen("fseek.c","r");
    char c = 0;
    if(fp)
    {
        fseek(fp,5,SEEK_SET);
        while(c = fgetc(fp) != EOF)
            printf("%c",c);
        fclose(fp);
    }
    else
        printf("Opening failed");
    return 0;
}
