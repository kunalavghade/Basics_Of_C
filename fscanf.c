#include<stdio.h>

int main()
{
    FILE *fp = fopen("fscanf.c","r");
    int a = 0;
    if(fp)
    {
        while(fscanf(fp,"%d",&a) != EOF)
            printf("%d\n",a);
        fclose(fp);
    }
    else
        printf("Opening failed\n");
    puts("");

    return 0;
}
