#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>    //ho provato a riparare il file implementando questa libreria
#define NRFIGLI 4

void mettiSpazi(int quanti){
int x;
for (x=0;x<=quanti;x++){
printf(" ");
}

void faiFiglio (int quanti){
int pid;
pid=fork();
if(pid==0){
mettiSpazi(quanti);
printf( "Sono il processo figlio con pid:%d.", getpid() );
printf( "Il mio papi ha pid: %d\n", getppid());
if (quanti>0){
faiFiglio(quanti-1);}else{
exit(0);
}
}else{
mettiSpazi(quanti);
printf( "Sono il processo padre con pid:%d.\n", getpid() );
}
}
}
