#include <stdio.h>

/* 
Inlämningsuppgift "UIS Betyg!".

Johan Kämpe

Uppgift:
Skapa en flerdimensionell array som innehåller inmatade 
resultat från ett påhittad prov med IS15 och IS16 som kolumner 
och medelvärde och median som rader. Endast boken och utvecklingsmiljön 
får användas till detta. 

Eftersom vi inte gått igenom sortering ännu är det ok att mata in värdena i storleksordning.
Programmet ska också räkna ut dessa 2 värden med kod.
För enkelhetens skull räcker det med 10 värden per klass.
Uppgiften lämnas in på moodle så långt ni kommit senast klockan 16.00.
*/

//Deklaration av funktioner
void sortera(double a[], int antal);
double medelvarde(double a[], int antal);
double median(double a[], int antal);

int main(){
	//Betyg antas ligga mellan 14 - 22, halva poäng antas kunna förekomma
	//Jag väljer att sortera värdena i programmet, för övningens skull
	double betyg_klass1[] = {21.5,20,21.5,22,15,16,14.5,20,20,22,15,14,21,16,16,21,21,21,14,15,22};
	double betyg_klass2[] = {14,14,16.5,14,16,14,20,21,14.5,22,14,17.5,16,21,21.5,22,21,18,22,14,22};
	 //Antal element i betyg_klass1, antas vara lika med betygen för klass2
	const int storlek = sizeof(betyg_klass1)/sizeof(betyg_klass1[0]);
	/* betyg_mv_med = hållare för medel- och medianvärde av betyg
	Kolumn 1 är Medelvärde 	Kolumn 2 är Medianvärde 
	Rad1 är för klass 1 (IS15)		rad2 är för klass 2 (IS16) */
	double betyg_mv_med[2][2];
	//Sorterar arrayerna med betyg med funktionen sortera
	sortera(betyg_klass1, storlek);
	sortera(betyg_klass2, storlek);
	//Sättter medelvärde och betyg till tvådimensionell array, med returvärden från funktionerna
	betyg_mv_med[0][0] = medelvarde(betyg_klass1, storlek);
	betyg_mv_med[1][0] = medelvarde(betyg_klass2, storlek);
	betyg_mv_med[0][1]  = median(betyg_klass1, storlek);
	betyg_mv_med[1][1]  = median(betyg_klass2, storlek);
	//Namn för klasserna:
	char *klassNamn[2] ={"IS15", "IS16"};
	//Skriver ut medelvärde och medianvärde för klasserna:
	printf("\tBetyg\t\tBetyg\n");
	printf("\tMedelvärde\tMedianvärde\n");
	for(int i = 0;i<2;i++){
		printf("%s:\t", klassNamn[i]);
		for(int j = 0;j<2;j++){
			printf("%.2f\t\t", betyg_mv_med[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//Funktion för att beräkna medelvärde, av värdena i en array.
double medelvarde(double a[], int antal){
	double summa = 0.0;
	for(int i=0; i<antal;){
		//Adderar alla elementens värden.
		summa += a[i++];
	}
	//Ger alla elementens värde dividerat med antal element, som returvärde.
	return summa/antal;
}

//Funktion för att beräkna medianvärde, av värdena i en array. Kräver att arrayen är sorterad.
double median(double a[], int antal){
	//Om ojämnt antal:
	if(antal % 2){ //triggar om antal % 2 inte är 0
		//heltalsdivision antal/2 blir index för mittentalet-1. Det ska inte sätta till +1, då arrayindex börjar på 0
		return a[antal/2];  //Funktion avslutas när returvärde anges, därför behövs inget else-villkor
	}
	//Om jämnt antal
	//b = hållare för de två mittersta talen, för att beräkna medlevärde på dem.
	double b[2] = {a[(antal/2)], a[(antal/2)+1]};
	//Om arrayen har ett jämnt antal element beräknas medelvärdet som medianvärde, av de två mittersta elementen
	return medelvarde(b, 2);
}

//Funktion skapad för Övning 13.3, modifierad för detta program
//Sorterar en array i stigande ordning
void sortera(double a[], int antal){
	//För temporär hållare vid byte av två arrayplatser
	double temp;
	for(int i = 0;i<antal;i++){
		int min = i;
		/* 'min' sätts till 'i' och jämförs sedan med i+1 'j' 
		om 'j' är mindre sätts 'min' till detta index 
		'i' jämförs med alla efterkommande indexpositioner */
		for(int j=i+1;j<antal;j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		/* a[i] (inialt första arraypositionen, byter plats med a med indexvärde max, minsta hamnar först) 
		Sedan kommer 'i' öka med ett (plats 2 i array) och efterkommande tal kommer jämföras */
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	return;
}