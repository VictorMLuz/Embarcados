#include <stdio.h>	
#include <fcntl.h>	
#include <unistd.h>	
#include <stdlib.h>

 int main(int argc, char **argv)
 {
    int fp;
    char ola[]="Ola mundo";	
    fp = open("ola_mundo.txt", O_WRONLY | O_CREAT);
    
    write(fp,&ola,9);
    close(fp);
    return 0;
 }
