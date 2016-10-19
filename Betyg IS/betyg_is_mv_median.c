#include <stdio.h>

/* 
Inl�mningsuppgift "UIS Betyg!".

Johan K�mpe

Uppgift:
Skapa en flerdimensionell array som inneh�ller inmatade 
resultat fr�n ett p�hittad prov med IS15 och IS16 som kolumner 
och medelv�rde och median som rader. Endast boken och utvecklingsmilj�n 
f�r anv�ndas till detta. 

Eftersom vi inte g�tt igenom sortering �nnu �r det ok att mata in v�rdena i storleksordning.
Programmet ska ocks� r�kna ut dessa 2 v�rden med kod.
F�r enkelhetens skull r�cker det med 10 v�rden per klass.
Uppgiften l�mnas in p� moodle s� l�ngt ni kommit senast klockan 16.00.
*/

//Deklaration av funktioner
void sortera(double a[], int antal);
double medelvarde(double a[], int antal);
double median(double a[], int antal);

int main(){
	//Betyg antas ligga mellan 14 - 22, halva po�ng antas kunna f�rekomma
	//Jag v�ljer att sortera v�rdena i programmet, f�r �vningens skull
	double betyg_klass1[] = {21.5,20,21.5,22,15,16,14.5,20,20,22,15,14,21,16,16,21,21,21,14,15,22};
	double betyg_klass2[] = {14,14,16.5,14,16,14,20,21,14.5,22,14,17.5,16,21,21.5,22,21,18,22,14,22};
	 //Antal element i betyg_klass1, antas vara lika med betygen f�r klass2
	const int storlek = sizeof(betyg_klass1)/sizeof(betyg_klass1[0]);
	/* betyg_mv_med = h�llare f�r medel- och medianv�rde av betyg
	Kolumn 1 �r Medelv�rde 	Kolumn 2 �r Medianv�rde 
	Rad1 �r f�r klass 1 (IS15)		rad2 �r f�r klass 2 (IS16) */
	double betyg_mv_med[2][2];
	//Sorterar arrayerna med betyg med funktionen sortera
	sortera(betyg_klass1, storlek);
	sortera(betyg_klass2, storlek);
	//S�ttter medelv�rde och betyg till tv�dimensionell array, med returv�rden fr�n funktionerna
	betyg_mv_med[0][0] = medelvarde(betyg_klass1, storlek);
	betyg_mv_med[1][0] = medelvarde(betyg_klass2, storlek);
	betyg_mv_med[0][1]  = median(betyg_klass1, storlek);
	betyg_mv_med[1][1]  = median(betyg_klass2, storlek);
	//Namn f�r klasserna:
	char *klassNamn[2] ={"IS15", "IS16"};
	//Skriver ut medelv�rde och medianv�rde f�r klasserna:
	printf("\tBetyg\t\tBetyg\n");
	printf("\tMedelv�rde\tMedianv�rde\n");
	for(int i = 0;i<2;i++){
		printf("%s:\t", klassNamn[i]);
		for(int j = 0;j<2;j++){
			printf("%.2f\t\t", betyg_mv_med[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//Funktion f�r att ber�kna medelv�rde, av v�rdena i en array.
double medelvarde(double a[], int antal){
	double summa = 0.0;
	for(int i=0; i<antal;){
		//Adderar alla elementens v�rden.
		summa += a[i++];
	}
	//Ger alla elementens v�rde dividerat med antal element, som returv�rde.
	return summa/antal;
}

//Funktion f�r att ber�kna medianv�rde, av v�rdena i en array. Kr�ver att arrayen �r sorterad.
double median(double a[], int antal){
	//Om oj�mnt antal:
	if(antal % 2){ //triggar om antal % 2 inte �r 0
		//heltalsdivision antal/2 blir index f�r mittentalet-1. Det ska inte s�tta till +1, d� arrayindex b�rjar p� 0
		return a[antal/2];  //Funktion avslutas n�r returv�rde anges, d�rf�r beh�vs inget else-villkor
	}
	//Om j�mnt antal
	//b = h�llare f�r de tv� mittersta talen, f�r att ber�kna medlev�rde p� dem.
	double b[2] = {a[(antal/2)], a[(antal/2)+1]};
	//Om arrayen har ett j�mnt antal element ber�knas medelv�rdet som medianv�rde, av de tv� mittersta elementen
	return medelvarde(b, 2);
}

//Funktion skapad f�r �vning 13.3, modifierad f�r detta program
//Sorterar en array i stigande ordning
void sortera(double a[], int antal){
	//F�r tempor�r h�llare vid byte av tv� arrayplatser
	double temp;
	for(int i = 0;i<antal;i++){
		int min = i;
		/* 'min' s�tts till 'i' och j�mf�rs sedan med i+1 'j' 
		om 'j' �r mindre s�tts 'min' till detta index 
		'i' j�mf�rs med alla efterkommande indexpositioner */
		for(int j=i+1;j<antal;j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		/* a[i] (inialt f�rsta arraypositionen, byter plats med a med indexv�rde max, minsta hamnar f�rst) 
		Sedan kommer 'i' �ka med ett (plats 2 i array) och efterkommande tal kommer j�mf�ras */
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	return;
}