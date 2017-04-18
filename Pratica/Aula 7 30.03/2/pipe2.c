#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

int main()
{

	int pid, D1=0;
	int fd[2];
	char A[]="FILHO: Pai, qual é a verdadeira essência da sabedoria?";
	char B[]="PAI: Não façais nada violento, praticai somente aquilo que é justo e equilibrado.";
	char C[]="FILHO: Mas até uma criança de três anos sabe disso!";
	char D[]="PAI: Sim, mas é uma coisa difícil de ser praticada até mesmo por um velho como eu...";	
	
	pipe(fd);

	pid=fork();

	
			
		if(pid==0){
			if(D1==0){
				if(write(fd[1], A, sizeof(A))<0){
					printf("ERRO ESCRITA - FILHO\n");}
				else{
					sleep(1);
					if(read(fd[0], B, sizeof(B))<0){
						printf("ERRO LEITURA - FILHO\n");}
					else{
					printf("%s\n",B);
					D1=1;}
				}

			}	
			if(D1==1){
				if(write(fd[1], C, sizeof(C))<0){
					printf("ERRO ESCRITA - FILHO\n");}
				else{
					sleep(1);
					if(read(fd[0], D, sizeof(D))<0){
						printf("ERRO LEITURA - FILHO\n");}
					else{
					printf("%s\n",D);}
				}

			}
		}
		else{
			sleep(1);
			if(read(fd[0], A, sizeof(A))<0){
				printf("ERRO LEITURA - PAI\n");}
			else{
				printf("%s\n",A);
				if(write(fd[1], B, sizeof(B))<0){
					printf("ERRO ESCRITA - PAI\n");}
			}
			sleep(1);
			if(read(fd[0], C, sizeof(C))<0){
			  printf("ERRO LEITURA - PAI\n");}
			else{
				printf("%s\n", C);
				if(write(fd[1], D, sizeof(B))<0){
					printf("ERRO ESCRITA - PAI\n");}
		}
		}
sleep(1);
return 0;
}

			




				 

