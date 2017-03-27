#include <stdio.h>
#include "bib_arqs.h"

void le_arq_texto(char *nome_arquivo,char *conteudo){

FILE *fp;
char c;
int i=0;

fp = fopen(nome_arquivo, "r");

while((c = getc(fp)) != EOF){

conteudo[i]=c;
i++;}

fclose(fp);
}

int tam_arq_texto(char *nome_arquivo){

FILE *fp;
char c;
int i=0;

fp = fopen(nome_arquivo, "r");

while((c = getc(fp)) != EOF){
i++;}

fclose(fp);
return i;
}
