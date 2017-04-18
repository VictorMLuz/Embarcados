#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

pid_t child_pid, child_pid2, child_pid3, pai;

pai= (int) getpid();
printf("Eu sou o processo pai, PID: %d e vou gerar um filho \n", (int) getpid());
printf("Confira:\n");
system("ps");
printf("\n");

child_pid = fork();

	if (child_pid == 0){ 
	printf(" Eu sou o primeiro filho, PID: %d \n ", (int) getpid());
	}
	else{
	sleep(1);
	system("ps");
	 printf(" Eu sou o pai, PID: %d e vou gerar outro filho\n ", (int) getpid());
	child_pid2 = fork();


		if(child_pid2 == 0){
		printf(" Eu sou o segundo filho, PID: %d \n ", (int) getpid());}

		else {
		sleep(1);
		if(child_pid2 =!0){
		system("ps");
	 	printf(" Eu sou o pai, PID: %d e vou gerar o terceiro filho\n ", (int) getpid());
		child_pid3 = fork();
			}

		if(child_pid3 == 0){
		printf(" Eu sou o terceiro filho, PID: %d \n ", (int) getpid());}
		
		if (pai==(int) getpid()){
		sleep(1);
		printf("Eu sou o processo pai, PID: %d. Veja o resultado disso tudo:\n", (int) getpid());
		system("ps");
		printf("\n");
		printf("Tchau!!\n");}
}
}

return 0;

}


