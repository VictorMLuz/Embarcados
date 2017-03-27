#include <stdio.h>
#include "bib_arqs.h"

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
