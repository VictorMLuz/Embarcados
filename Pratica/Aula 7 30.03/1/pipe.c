#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

int main()
{

	int pid, i, r;	
	int fd[2];	

	pipe(fd);

	pid=fork();

	for(i=1;i<11;i++){
			
		if(pid==0){
			
			if(read(fd[0],&r,sizeof(r))<0){
				printf("ERRO NA LEITURA\n");}
			else{
				printf("%d\n", r);
				if(r==10){
					exit(1);}
			}
			}
		else{
			sleep(1);
			if(write(fd[1],&i,sizeof(i))<0){
				printf("ERRO NA ESCRITA\n");}
			if(i==10){
				exit(1);}
	}
	}
}




				 

