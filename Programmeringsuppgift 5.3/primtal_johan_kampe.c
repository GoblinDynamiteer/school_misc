#include <stdio.h>

/* Programmeringsuppgift 5.3, Sida 99

Johan K�mpe

Anv�nd programmet p� sida 98 som f�rebild och skriv ett 
nytt program som l�ser in ett positivt heltal 'n'. Skriv sedan 
ut alla primtal som �r st�rre eller lika med 'n'.

H�gst 10 primtal ska visas per rad!

Info:
Ett primtal �r ett tal som enbart �r j�mnt delbart med sig sj�lv eller talet 1
Talet ska vara st�rre �n 1
*/


int main(){
	//Variabler f�r inmatning av det positiva heltalet, samt en r�knare f�r n�r newline ska skrivas ut
	int n, nyrad = 0;
	_Bool ar_primtal;
	printf("Ange ett positivt heltal: ");
	scanf("%d", &n);
	printf("Primtal:\n");
	/* 
	Den yttre for-satsen k�r lika m�nga g�nger som det inmatade v�rdet till variabeln 'n' �r stort. 
	Det minsta primtalet �r 2, d�rf�r s�tts i till 2. i �r det tal som ska unders�kas, om det �r ett primtal.
	
	F�r varje nytt varv s�tts ar_primtal till 1, den andra for-satsen unders�ker om talet i �r j�mnt delbart med 
	n�got av talen i intervallet 2 -> i-1. I s�fall s�tts ar_primtal till 0.
	*/
	for(int i = 2; i<=n;i++){
		ar_primtal = 1;
		for(int delning = 2;delning<i;delning++){
			if(i % delning == 0){
				ar_primtal = 0;
			}
		}
		//if-sats som triggar om ar_primtal == 1, i skrivs ut, d� det �r ett primtal
		if(ar_primtal){
			printf("%5d ", i); //%5d inneb�r att utskriften kommer h�gerjusteras med minst 5 tecken (likt Excel-celler med siffror)
			nyrad++; //nyrad �kar med 1 f�r varje utskrivet primtal, om nyrad n�r 10 skrivs en ny rad ut och nyrad s�tts till 0
			if(nyrad == 10){
				printf("\n");
				nyrad = 0;
			}
		}
	}
	return 0;
}