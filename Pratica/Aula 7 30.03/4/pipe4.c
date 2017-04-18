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

	if(pid==0){
		char nome[20];
		printf("Digite seu nome:");
		scanf("%s", nome);
		i=strlen(nome);
		write(fd[1],&i, sizeof(i));
		sleep(1);
		write(fd[1], nome, sizeof(nome));
		}
	else{
		char *ptr;
		read(fd[0], &r, sizeof(r));
		ptr=malloc(r);
		sleep(1);
		read(fd[0], ptr, (r));

		printf("%s\n", ptr);
		free(ptr);}

return 0;
}



				 

