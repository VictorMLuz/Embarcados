#include <stdio.h>	
#include <fcntl.h>	
#include <unistd.h>	
#include <stdlib.h>
#include <string.h>
#include "bib_arqs.h"

void le_arq_texto(char *nome_arquivo,char *conteudo){

int fp;
char c;
int i=0;

fp = open(nome_arquivo, O_RDWR, S_IRWXU);

while(read(fp,&c,1)){

conteudo[i]=c;
i++;}

close(fp);
}

int tam_arq_texto(char *nome_arquivo){

int fp;
char c;
int i=0;

fp = open(nome_arquivo, O_RDWR, S_IRWXU);

while(read(fp,&c,1)){
i++;}

close(fp);

return i-1;
}
