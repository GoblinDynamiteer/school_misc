#include <math.h>
#include <stdio.h>

/*
Programmeringsuppgift 4.2, sida 90

Johan K�mpe

Uppgift:
Skriv ett program som matar ut en tabell f�r tal mellan 1-12.
P� varje rad: talet, talet i kvadrat, talet i kubik.

Problematik:
Av n�gon anledning kan jag inte anv�nda pow(x,2) med int x, 
dock fungerar pow(x,3) med variabel med datatyp int. 

med double f�r x, och %.0lf kan man mata ut heltal i printf fr�n double variabler

Det skulle ocks� g� at k�ra in variabler med x*x resp. x*x*x, men jag gillar pow(), 
det k�nns snyggare p� n�got s�tt.
*/

int main(){
	printf("n\tn^2\tn^3\n-------------------------\n"); // '\t' �r tabb-slag
	//for-sats som k�r s� l�nge x �r mindre eller lika med 12, i anv�nds ocks� f�r ber�kningarna i printf
	for(double i=1;i<=12;i++) 
		printf("%.0lf\t%.0lf\t%.0lf\n", i, pow(i,2), pow(i,3)); 
	return 0;
}