#include <stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    char c;
    int k,i;
    FILE *f;
    f=fopen("info.txt","w");

    if (f==NULL)
    {
        puts("not opened file ");
        exit(1);
        /* code */
    }
    

    while(feof(f)){

    }   


    fclose(f);
    /* code */
    return 0;
}
