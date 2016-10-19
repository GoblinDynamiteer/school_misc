#include <stdio.h>
#include <stdlib.h> 
/*
stdlib.h behövs för att kunna använda funktionen system("x"), 
som kör systemkommandon på datorn

Uppgift:
"Försök att skriva ett litet program som med hjälp av bland 
annat print förklarar vad tre valfria kommandon för konsolen gör."
"Om det passar är det helt ok att också låta programmet köra dessa 
med hjälp av system("
"Se även till att kommentera koden om någonting är otydligt"

Programmet:
Programmet förklarar vad de tre kommandona set, dir & cls gör.
Man har sedan möjlighet att köra dessa kommandon genom att 
mata in 1, 2 eller 3. För att avsluta skriver man in en annan siffra.

Problematik/fel: 
Matar man in något annat än en siffra så loopas
kommandon kontinuerligt. Programmet kan avbrytas med CTRL+C (Windows)
*/

int main(){	
	//För att skriva ut citattecken i printf används \"
	printf("Kommando: \"set\" listar (och sätter) systemvariabler");
	printf("\nKommando: \"dir\" listar innehållet i en katalog");
	printf("\nKommando: \"cls\" - \"ClearScreen\", tar bort innehållet på (blankar) skärmen");
	int val = 1; //Variabel för val av körning av kommando, den sätts till "1" för att while-satsen nedan ska köras.
	//While-sats som upprepas så länge användaren inte matar in någon annan siffra än 1, 2 eller 3:
	while (val == 1 || val == 2 || val == 3) {
		printf("\n\nMata in siffra för att köra kommando:\n1: set\n2: dir\n3: cls\nMata in någon annan siffra för att avbryta!");
		printf("\nVal: ");
		scanf("%d", &val); 	//Sätter variabeln val till användarinmatad siffra
		if (val == 1) 		//Val 1, kör kommandot "set"
			system("set"); 
		else if (val == 2) 	//Val 2, kör kommandot "dir"
			system("dir");
		else if (val == 3) 	//Val 3, kör kommandot "cls" - blankar skärmens innehåll
			system("cls");
		else {
			printf("Avbryter");
			break;
		}
			
		}
	return 0;
}