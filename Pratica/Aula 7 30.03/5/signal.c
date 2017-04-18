#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void CTRLC()
{
	printf("CTRL+C detectado. Fim do processo...\n");
	exit(1);
}

void lista(){
	system("ps");
	alarm(1);
}

int main()
{
	printf("Pressione CTRL-C para fechar o programa.\n");
	signal(SIGINT, CTRLC);
	signal(SIGALRM, lista);	
	alarm(1);
	while(1);
	return 0;
}



				 

