#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv){

int father, child, i;

father=(int) getpid();

for(i=1;i<argc;i++){
	if(father == (int) getpid()){
		child = fork();
		if(((int) getpid()) != father){
			system(argv[i]);}
}
}
if(father == (int) getpid()){
system("ps");
}
return 0;

}


