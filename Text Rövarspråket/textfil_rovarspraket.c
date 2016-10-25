#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* UPPGIFT 3
- L�s in valfri fil
- Skriv om filen till r�varspr�ket (se sid 213 f�r lite id�er)
- Tomas blir p� r�varspr�k totomomasos, alla konsonanter f�r ett o mellan sig
och upprepas 

I det svenska afabetet betraktas: 
B, C, D, F, G, H, J, K, L, M, N, P, Q, R, S, T, V, W, X, och Z som konsonanter
*/

int main(){
	FILE *rovarfil = fopen("vanligtext.txt", "r");
	char bokstav;
	//fgetc plockar och returnerar tecken ur textfil, EOF n�r klar
	while((bokstav = fgetc(rovarfil)) != EOF){
		//kollar om gemena tecknet i variabeln bokstav finns bland "bcdfghjklmnpqrstvwxz", returnerar NULL om ej
		if(strchr("bcdfghjklmnpqrstvwxz", tolower(bokstav))){
			putchar(bokstav);
			putchar('o');
			putchar(tolower(bokstav)); //Till lowercase, om det �r en versal (i b�rjan av en mening)
		}
		else{
			putchar(bokstav);
		}
	}
	fclose(rovarfil); //St�nger filen
	return 0;
}

