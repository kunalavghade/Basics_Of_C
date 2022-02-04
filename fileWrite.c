#include<stdio.h>

int main()
{
    char* filename = "file.txt";

    FILE* fp = fopen(filename,"w");

    char c ;
    if(fp)
    {
        for(c = 'A'; c <='Z';c++)
            fputs(c,fp);
    
        fputs('\n',fp);
        fclose(fp);
    }
    else
        printf("Opening %s failed \n",filename);
    return 0;
}
