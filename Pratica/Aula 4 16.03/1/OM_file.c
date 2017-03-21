#include <stdio.h>

 int main()
 {
    FILE *fp;
    fp = fopen ("ola_mundo.txt", "w");
    if (fp == NULL) {
       printf ("ERRO.\n");
       return 0;
    }
    fprintf(fp,"Ola mundo");
    fclose (fp);
    return 0;
 }
