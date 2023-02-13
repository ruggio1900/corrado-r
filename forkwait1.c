

Conversazioni
Spazio utilizzato: 6.550,85 GB
Norme del programma
Powered by Google
Ultima attività dell'account: 3 ore fa
Dettagli
	
Metti in pausa le notifiche mobile mentre utilizzi questo dispositivo
Per mettere in pausa le notifiche mobile di Gmail mentre utilizzi questo dispositivo, consenti al tuo browser di rilevare il tuo stato di attività. Fai clic su Continua, poi fai clic su Consenti quando richiesto dal browser.

#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	int pid, status;
	pid = fork();
	if (pid == 0) {
		printf("codice eseguito dal figlio \n");
		exit(0);
	} else {
		pid = wait(&status);
		printf("terminato processo figlio n.%d\n", pid);
		if ((char) status == 0) {
			printf("terminazione volontaria con stato %d\n", status);
		} else {
			printf("terminazione errata con segnale %d\n", (char)status);
		}
	}
}
