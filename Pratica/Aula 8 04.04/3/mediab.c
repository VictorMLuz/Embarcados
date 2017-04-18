#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

long int v[50000], r[3];


void* s1()
{
long int e, max=0;
	for(e=0;e<12500;e++){
	max+=v[e];}
r[0]=max/12500;
}

void* s2()
{
long int e, max=0;
	for(e=12500;e<25000;e++){
		max+=v[e];}

r[1]=max/12500;
}

void* s3()
{
long int e, max=0;
	for(e=25000;e<37500;e++){
		max+=v[e];}
r[2]=max/12500;
}

void* s4()
{
long int e, max=0;
	for(e=37500;e<50000;e++){
		max+=v[e];}
r[3]=max/12500;
}


int main()
{
int i;
long int vm=0;
//srand(time(NULL));

for(i=0;i<50000;i++){

v[i]=rand()%1000000;
}

pthread_t t1,t2,t3,t4;
pthread_create (&t1, NULL, &s1, NULL);
pthread_create (&t2, NULL, &s2, NULL);
pthread_create (&t3, NULL, &s3, NULL);
pthread_create (&t4, NULL, &s4, NULL);

pthread_join(t1,NULL);
pthread_join(t2,NULL);
pthread_join(t3,NULL);
pthread_join(t4,NULL);

for(i=0;i<4;i++){
vm+=r[i];}


printf("A media dos valores foi %ld\n", vm/4);
return 0;
}

