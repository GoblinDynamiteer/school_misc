#include <stdio.h>

int main(){
	/* Om filen ska hamna i en mapp där huvud-c-filen ligger skriver man 
	mapp/textfil.txt     ----     INTE /mapp/textfil.txt
	*/
	FILE *infil = fopen("testmapp/textfil_a.txt", "r");
	if(infil == NULL){
		printf("Kunde inte öppna filen!");
	}
	int tecken;
	//Läser in ett tecken i taget från textfilen, till variabel tecken
	while((tecken = fgetc(infil)) != EOF){ //fgetc retunerar EOF om inget tecken lästs
		putchar(tecken); //Skriver ut tecknet i tecken
	}
	return 0;
}
