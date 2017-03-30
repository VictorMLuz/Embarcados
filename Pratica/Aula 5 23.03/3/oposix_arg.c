#include <stdio.h>	
#include <fcntl.h>	
#include <unistd.h>	
#include <stdlib.h>
#include <string.h>

 int main(int argc, char **argv)
 {
    int fp;
    char nome[20];
    char nomea[23];
    char idade[4];
    int t=0, n=0;

	strcpy(nome,argv[1]);
	strcpy(idade,argv[2]);

	t=strlen(nome);
	n=strlen(idade);

	sprintf(nomea, "%s.txt", nome);
	
	fp = open(nomea, O_RDWR | O_CREAT, S_IRWXU);

		write(fp,"Nome:",5);
		write(fp,&nome, t);
		write(fp,"\n",1);
		write(fp,"Idade:",6);
		write(fp,&idade, n);
		write(fp," anos",5);
    
    close(fp);
    return 0;
 }
