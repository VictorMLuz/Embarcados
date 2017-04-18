#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int i=1, u=1;

void* escreve()
{
int f=0;
while(1){
	if(f != u){
		printf("%d\n", i);
		f=u;}
}
}


int main()
{

pthread_t t1;
pthread_create (&t1, NULL, &escreve, NULL);

for(i=1;i<=10;i++){
u++;
sleep(1);
}

return 0;
}
