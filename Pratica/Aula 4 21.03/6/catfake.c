#include <stdio.h>
#include "bib_arqs.h"

int main(int argc, char **argv){

char print[100];
int tamanho;

le_arq_texto(argv[1],print);

puts(print);

return 0;
}


