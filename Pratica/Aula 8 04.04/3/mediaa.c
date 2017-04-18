#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>


int main()
{
long int vm=0, v[50000];
int i;
//srand(time(NULL));

for(i=0;i<50000;i++){

v[i]=rand()%1000000;
}

for(i=0;i<50000;i++){

vm+=v[i];
}

printf("O valor máximo foi %ld\n", vm /50000);
return 0;
}
