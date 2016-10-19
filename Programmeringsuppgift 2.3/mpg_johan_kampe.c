#include <stdio.h>
/*
Programmeringsuppgift 2.3, Sida 57

Johan K�mpe

Programmet ska omvandla inmatat v�rde, miles per gallon (mpg) till liter/mil
Resultatet ska skrivas ut.

Omvandlingar:
1 gallon = 3.785 liter
1 mile = 1.609 km = 0.1609 mil

R�kneexempel: 
En Ford Explorer f�rbrukar ca 20 mpg.
20 mpg = 20 * 0.1609 mil per 3.785 liter
20 mpg = (20 * 0.1609) / 3.785 mil per 1 liter
Invertera mil/liter --> liter/mil
20 mpg = 1/((20 * 0.1609) / 3.785) ~~ 1.18 liter/mil
*/

int main()
{
	float mpg; //Deklarerar variabel f�r miles per gallon, mpg
	printf("Ange miles per gallon: ");
	scanf("%f", &mpg); //L�ser in v�rde till mpg fr�n anv�ndare
	//Omvandlar och skriver ut inmatat v�rde till liter/mil, enligt formel i r�kneexemplet ovan:
	printf("%.2f miles per gallon �r ca %.2f liter per mil", mpg, 1/((mpg * 0.1609) / 3.785));
	return 0;
}


