#include <stdio.h>
#include <stdlib.h>

//Uppgift: G�r en funktion som byter v�rde mellan tv� inparametrar

void byt(double *a, double *b);

int main(){
	double var1 = 321.321, var2 = 987.789;
	printf("Innan byte: var1: %.3f var2: %.3f",var1,var2);
	//M�ste skicka adresserna, f�r att kunna tas emot till pekare
	byt(&var1, &var2); 
	printf("\nEfter byte: var1: %.3f var2: %.3f",var1,var2);
	return 0;
}

void byt(double *a, double *b){
	double *temp = malloc(sizeof(double));
	 /* M�ste ge/s�tta v�rdet i pekarena 
	 
	 temp = a, ger adressen till temp. 
	 Och detta kommer kunna s�ttas till variablerna utanf�r funktionen.
	 
	 V�rden som �ndras av pekarna �r p� den fysiska adressen de pekar p�,
	 det inneb�r att variablerna utanf�r funktionen kommer f� dessa v�rden.
	 
	 Detta fungerar f�r att vi skickade variablernas adresser till pekarna i funktionen,
	 som argument.
	 */
	 
	*temp = *a;
	*a = *b;
	*b = *temp;
	return;
}
