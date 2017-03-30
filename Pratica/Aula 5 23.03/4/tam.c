#include <stdio.h>
#include "bib_arqs.h"

int main(){

char nome[30];
int tamanho;

scanf("%s", nome);

tamanho=tam_arq_texto(nome);
printf("%d\n", tamanho);

return 0;
}


