#include <stdio.h>

int main(){
	/* Om filen ska hamna i en mapp där huvud-c-filen ligger skriver man 
	mapp/textfil.txt     ----     INTE /mapp/textfil.txt
	*/
	FILE *utfil = fopen("testmapp/textfil_a.txt", "a");
	if(utfil == NULL){
		printf("Kunde inte skapa filen!");
	}
	for(int i = 0; i<20;i++){
		fprintf(utfil, "Hej jag är en text! på rad %d\n", i+1);
	}
	return 0;
}