#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

long int v[50000];
int r[3];


void* s1()
{
int e, max=0;
	for(e=0;e<12500;e++){
	if(v[e]>max){
		max=v[e];}
	}
r[0]=max;
}

void* s2()
{
int e, max=0;
	for(e=12500;e<25000;e++){
	if(v[e]>max){
		max=v[e];}
	}
r[1]=max;
}

void* s3()
{
int e, max=0;
	for(e=25000;e<37500;e++){
	if(v[e]>max){
		max=v[e];}
	}
r[2]=max;
}

void* s4()
{
int e, max=0;
	for(e=37500;e<50000;e++){
	if(v[e]>max){
		max=v[e];}
	}
r[3]=max;
}


int main()
{
int i, vmax=0;
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
	if(r[i]>vmax){
		vmax=r[i];}
}

printf("O valor máximo foi %d.\n", vmax);
return 0;
}

