#include <stdio.h>

/* Programmeringsuppgift 6.2, Sida 120

Johan K�mpe

Skrv en funktion som ber�knar vad en vara kostar inklusive moms
Som parametrar ska funktionen f� priset exklusive moms, samt
momssatsen uttryckt i procent. 

Exempel: 
pris = 100 kr
moms = 25%
Pris inkl. moms = 100 + 100*(25/100) = 125 kr
*/


//Funktion som ber�knar en varas pris med moms, och ger summan i returv�rde
double prisMedMoms(double pris, double moms){
	//returnerar priset + priset * moms/100
	return pris += pris*(moms/100);
}

int main(){
	//test av funktionen:
	double prisUtanMoms, momsProcent;
	printf("Ange pris utan moms: ");
	scanf("%lf", &prisUtanMoms);
	printf("Ange moms i procent: ");
	scanf("%lf", &momsProcent);
	printf("Priset med moms �r %.2f kr", prisMedMoms(prisUtanMoms, momsProcent));
}