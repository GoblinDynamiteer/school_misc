#include <stdio.h>

int main(){
	/* Om filen ska hamna i en mapp d�r huvud-c-filen ligger skriver man 
	mapp/textfil.txt     ----     INTE /mapp/textfil.txt
	*/
	FILE *infil = fopen("testmapp/textfil_a.txt", "r");
	if(infil == NULL){
		printf("Kunde inte �ppna filen!");
	}
	int tecken;
	//L�ser in ett tecken i taget fr�n textfilen, till variabel tecken
	while((tecken = fgetc(infil)) != EOF){ //fgetc retunerar EOF om inget tecken l�sts
		putchar(tecken); //Skriver ut tecknet i tecken
	}
	return 0;
}
