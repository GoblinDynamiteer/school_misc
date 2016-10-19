#include <stdio.h>
#include <stdlib.h> 
/*
stdlib.h beh�vs f�r att kunna anv�nda funktionen system("x"), 
som k�r systemkommandon p� datorn

Uppgift:
"F�rs�k att skriva ett litet program som med hj�lp av bland 
annat print f�rklarar vad tre valfria kommandon f�r konsolen g�r."
"Om det passar �r det helt ok att ocks� l�ta programmet k�ra dessa 
med hj�lp av system("
"Se �ven till att kommentera koden om n�gonting �r otydligt"

Programmet:
Programmet f�rklarar vad de tre kommandona set, dir & cls g�r.
Man har sedan m�jlighet att k�ra dessa kommandon genom att 
mata in 1, 2 eller 3. F�r att avsluta skriver man in en annan siffra.

Problematik/fel: 
Matar man in n�got annat �n en siffra s� loopas
kommandon kontinuerligt. Programmet kan avbrytas med CTRL+C (Windows)
*/

int main(){	
	//F�r att skriva ut citattecken i printf anv�nds \"
	printf("Kommando: \"set\" listar (och s�tter) systemvariabler");
	printf("\nKommando: \"dir\" listar inneh�llet i en katalog");
	printf("\nKommando: \"cls\" - \"ClearScreen\", tar bort inneh�llet p� (blankar) sk�rmen");
	int val = 1; //Variabel f�r val av k�rning av kommando, den s�tts till "1" f�r att while-satsen nedan ska k�ras.
	//While-sats som upprepas s� l�nge anv�ndaren inte matar in n�gon annan siffra �n 1, 2 eller 3:
	while (val == 1 || val == 2 || val == 3) {
		printf("\n\nMata in siffra f�r att k�ra kommando:\n1: set\n2: dir\n3: cls\nMata in n�gon annan siffra f�r att avbryta!");
		printf("\nVal: ");
		scanf("%d", &val); 	//S�tter variabeln val till anv�ndarinmatad siffra
		if (val == 1) 		//Val 1, k�r kommandot "set"
			system("set"); 
		else if (val == 2) 	//Val 2, k�r kommandot "dir"
			system("dir");
		else if (val == 3) 	//Val 3, k�r kommandot "cls" - blankar sk�rmens inneh�ll
			system("cls");
		else {
			printf("Avbryter");
			break;
		}
			
		}
	return 0;
}