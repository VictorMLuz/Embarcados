#include <stdio.h>
#include "bib_arqs.h"

int main(){

char nome[30], print[100];
int tamanho;

scanf("%s", nome);

le_arq_texto(nome,print);

puts(print);

return 0;
}


