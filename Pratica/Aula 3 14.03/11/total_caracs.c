#include <stdio.h>
#include "num_caracs.h"

int main(int argc, char **argv){


int i=0, u=0;

u=num_caracs(argv[0]);

for(i=1;i<argc;i++){
	u=u+num_caracs(argv[i]);
}
printf("Total de caracteres de entrada: %d\n", u);
return 0;
}
