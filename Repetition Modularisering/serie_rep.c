/* Programmeringsuppgift 4.6, Sida 91 - Repetition

Beräkna summan av 1/1 - 1/2 + 1/3 osv 
(OBS alternerar mellan plus/minus). 
Serien ska avslutas när den sista termen har ett absolutbelopp mindre än 0,00001 

Thomas-uppgift:
Dela upp programmet i funktioner!
Försöke se ett naturligt sätt för uppdelningen.
Flytta till separat fil!
*/

#include "funk.h"
#include <stdio.h>

int main(){
	int i = 1;
	double summa = 0.0;
	while(checkDiv(i)){
		summa = divSub(summa, i++);
		if(!checkDiv(i)){
			break;
		}
		summa = divAdd(summa, i++);
	}
	printf("Summa: %lf", summa);
	return 0;
}

