#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>


int main()
{
int vmax=0;
long int v[50000], i;
//srand(time(NULL));

for(i=0;i<50000;i++){

v[i]=rand()%1000000;
}

for(i=0;i<50000;i++){

if(v[i]>vmax){
vmax=v[i];
}

}
printf("O valor máximo foi %d.\n", vmax);
return 0;
}
