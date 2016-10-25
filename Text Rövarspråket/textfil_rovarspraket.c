#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* UPPGIFT 3
- Läs in valfri fil
- Skriv om filen till rövarspråket (se sid 213 för lite idéer)
- Tomas blir på rövarspråk totomomasos, alla konsonanter får ett o mellan sig
och upprepas 

I det svenska afabetet betraktas: 
B, C, D, F, G, H, J, K, L, M, N, P, Q, R, S, T, V, W, X, och Z som konsonanter
*/

int main(){
	FILE *rovarfil = fopen("vanligtext.txt", "r");
	char bokstav;
	//fgetc plockar och returnerar tecken ur textfil, EOF när klar
	while((bokstav = fgetc(rovarfil)) != EOF){
		//kollar om gemena tecknet i variabeln bokstav finns bland "bcdfghjklmnpqrstvwxz", returnerar NULL om ej
		if(strchr("bcdfghjklmnpqrstvwxz", tolower(bokstav))){
			putchar(bokstav);
			putchar('o');
			putchar(tolower(bokstav)); //Till lowercase, om det är en versal (i början av en mening)
		}
		else{
			putchar(bokstav);
		}
	}
	fclose(rovarfil); //Stänger filen
	return 0;
}

