/*
Skriv ett program som fr�gar efter en m�nad och rapporterar hur m�nga dagar den m�naden har
anv�nd ramsan 30 dagar har november, april, juni och september, 28 februari allen, 
alla de �vriga trettioen ifall ni �r os�kra p� hur m�nga dagar respektive m�nad har. 

Anv�nd if-sats eller switchsats.
Ers�tt m�nadsnamnen med ett heltal f�r att underl�tta, t.ex. 1 f�r januari och s� vidare

En k�rning kan se ut s� h�r:
Ange en m�nad, 1 f�r januari, 2 f�r februari och s� vidare

M�naden du angett (2) har 28 dagar

Januari, 31 dagar
Februari, 28 dagar, 29 vid skott�r
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
#define L "\n---------------------------------------\n"  //f�r streck i utsskrift

int main(){
	int val, newline = 1;
	char *m[12];		//Array som h�ller m�nadernas namn
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
	int dagar[12] = {31,28,31,30,31,30,31,31,30,31,30,31};	//array som h�ller m�nadernas dagar
	while(1){	//k�rs s� l�nge anv�ndaren inte vill avbryta
		printf("%sM�NADSKOLL!\nSe hur m�nga dagar en m�nad har%s",L,L); 
		/*
		Ovan: i printf �r %s datatypen f�r text(?), jag anv�nder det f�r att f� in mina 
		linjer som definierats som L. Linjerna har ocks� newline i b�rjan och slutet.
		
		Nedan:
		For-sats som listar m�naderna och siffer-val f�r anv�ndaren
		I och med att en array b�rjar p� 0 s� anv�nder jag i=1-1 och i<=12-1
		Det hade f�rst�s g�tt att s�tta i=0 och i<12, men jag tycker det blir
		mer begripligt s� h�r.
		
		M�naderna listas i tv� kolumner, med tv� tabb-slag (\t) mellan m�naderna per rad
		Jag beh�vde fuska lite med "maj", och satte ett mellanslag efter j s� det blv "maj "
		annars st�mmer inte tabbarna. Allt detta �r enbart av estetiska sk�l.
		*/	
		for (int i=1-1;i<=12-1;i++){
			printf("%d - %s\t\t",i+1, m[i]);
			if (newline == 2){
				printf("\n");
				newline = 0;
			}
			newline++;
		}
		printf("\nMata in 0 f�r att avsluta.\nVal:");
		scanf("%d", &val);
		if (val == 0){
			printf("Avslutar!");
			exit(1);		 //en funktion fr�n stdlib.h, som avslutar programmet
		}
		else if (val == 2){	//Trigger f�r februari, som �r ett specialfall. Har en extra dag under skott�r
			printf("%s%s har %d dagar! (%d vid skott�r) %s",L, m[val-1], dagar[val-1], dagar[val-1]+1, L);
		}
		else if (val > 12 || val < 1){ //Triggar om anv�ndaren matar in ett sifferv�rde som inte �r i spannet 1-12
			printf("Fel inmatning!");
		}
		else //Skriver ut m�nadens namn och antal dagar fr�n de tv� arrayerna, val-1 pga att array b�rjar p� 0
			printf("%s%s har %d dagar!%s",L, m[val-1], dagar[val-1],L);
	}
}