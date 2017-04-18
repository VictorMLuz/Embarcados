#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

int main()
{

	int pai,pid1,pid2, i, r;	
	int fd[2];
	char F1[] = "FILHO1: Quando o vento passa, é a bandeira que se move.";
	char F2[] = "FILHO2: Não, é o vento que se move.";
	char P[] = "PAI: Os dois se enganam. É a mente dos senhores que se move.";	

	pipe(fd);

	pai=(int) getpid();
	pid1=fork();

//Código filho 1
if(pid1==0){

	if(write(fd[1], F1, sizeof(F1))<0){
		printf("ERRO ESCRITA FILHO 1\n");}

	sleep(2);

	if(read(fd[0], P, sizeof(P))<0){
		printf("ERRO LEITURA FILHO 1\n");}
	else{
		printf("%s\n", P);}
}

else{
fork();
if((int)getpid()!=pai){


	if(read(fd[0], F1, sizeof(F1))<0){
		printf("ERRO LEITURA FILHO 2\n");}
	else{
		printf("%s\n", F1);}
	sleep(1);

	if(write(fd[1], F2, sizeof(F2))<0){
		printf("ERRO ESCRITA FILHO 2\n");}
}

//Código pai
if(((int) getpid())==pai){
	
	sleep(1);
	if(read(fd[0], F2, sizeof(F2))<0){
		printf("ERRO LEITURA PAI\n");}
	else{
	     printf("%s\n", F2);}

sleep(1);
	if(write(fd[1], P, sizeof(P))<0){
		printf("ERRO ESCRITA PAI\n");}
		
}
}

return 0;
}

	




				 

