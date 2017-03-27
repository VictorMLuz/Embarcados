#include<stdio.h>

int main(int argc, char **argv){

FILE *fp;
int idade;

char nome[30];

sprintf(nome,"%s.txt",argv[1]);

    fp = fopen (nome, "w");
    if (fp == NULL) {
       printf ("ERRO.\n");
       return 0;
    }

fprintf(fp,"Nome: %s \nIdade:%s anos\n", argv[1], argv[2]);

fclose(fp);
return 0;
}


