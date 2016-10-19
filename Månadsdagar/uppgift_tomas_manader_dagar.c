/*
Skriv ett program som frågar efter en månad och rapporterar hur många dagar den månaden har
använd ramsan 30 dagar har november, april, juni och september, 28 februari allen, 
alla de övriga trettioen ifall ni är osäkra på hur många dagar respektive månad har. 

Använd if-sats eller switchsats.
Ersätt månadsnamnen med ett heltal för att underlätta, t.ex. 1 för januari och så vidare

En körning kan se ut så här:
Ange en månad, 1 för januari, 2 för februari och så vidare

Månaden du angett (2) har 28 dagar

Januari, 31 dagar
Februari, 28 dagar, 29 vid skottår
Mars, 31 dagar
April, 30 dagar
Maj, 31 dagar
Juni, 30 dagar
Juli, 31 dagar
Augusti, 31 dagar
September, 30 dagar
Oktober, 31 dagar
November, 30 dagar
December, 31 dagar

*/
#include <stdio.h>
#include <stdlib.h>
#define L "\n---------------------------------------\n"  //för streck i utsskrift

int main(){
	int val, newline = 1;
	char *m[12];		//Array som håller månadernas namn
	m[0] = "Januari";
	m[1] = "Februari";
	m[2] = "Mars";
	m[3] = "April";
	m[4] = "Maj ";
	m[5] = "Juni";
	m[6] = "Juli";
	m[7] = "Augusti";
	m[8] = "September";
	m[9] = "Oktober";
	m[10] = "November";
	m[11] = "December";
	int dagar[12] = {31,28,31,30,31,30,31,31,30,31,30,31};	//array som håller månadernas dagar
	while(1){	//körs så länge användaren inte vill avbryta
		printf("%sMÅNADSKOLL!\nSe hur många dagar en månad har%s",L,L); 
		/*
		Ovan: i printf är %s datatypen för text(?), jag använder det för att få in mina 
		linjer som definierats som L. Linjerna har också newline i början och slutet.
		
		Nedan:
		For-sats som listar månaderna och siffer-val för användaren
		I och med att en array börjar på 0 så använder jag i=1-1 och i<=12-1
		Det hade förstås gått att sätta i=0 och i<12, men jag tycker det blir
		mer begripligt så här.
		
		Månaderna listas i två kolumner, med två tabb-slag (\t) mellan månaderna per rad
		Jag behövde fuska lite med "maj", och satte ett mellanslag efter j så det blv "maj "
		annars stämmer inte tabbarna. Allt detta är enbart av estetiska skäl.
		*/	
		for (int i=1-1;i<=12-1;i++){
			printf("%d - %s\t\t",i+1, m[i]);
			if (newline == 2){
				printf("\n");
				newline = 0;
			}
			newline++;
		}
		printf("\nMata in 0 för att avsluta.\nVal:");
		scanf("%d", &val);
		if (val == 0){
			printf("Avslutar!");
			exit(1);		 //en funktion från stdlib.h, som avslutar programmet
		}
		else if (val == 2){	//Trigger för februari, som är ett specialfall. Har en extra dag under skottår
			printf("%s%s har %d dagar! (%d vid skottår) %s",L, m[val-1], dagar[val-1], dagar[val-1]+1, L);
		}
		else if (val > 12 || val < 1){ //Triggar om användaren matar in ett siffervärde som inte är i spannet 1-12
			printf("Fel inmatning!");
		}
		else //Skriver ut månadens namn och antal dagar från de två arrayerna, val-1 pga att array börjar på 0
			printf("%s%s har %d dagar!%s",L, m[val-1], dagar[val-1],L);
	}
}