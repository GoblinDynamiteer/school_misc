#include <stdio.h>
#include <stdlib.h>

//Uppgift: Gör en funktion som byter värde mellan två inparametrar

void byt(double *a, double *b);

int main(){
	double var1 = 321.321, var2 = 987.789;
	printf("Innan byte: var1: %.3f var2: %.3f",var1,var2);
	//Måste skicka adresserna, för att kunna tas emot till pekare
	byt(&var1, &var2); 
	printf("\nEfter byte: var1: %.3f var2: %.3f",var1,var2);
	return 0;
}

void byt(double *a, double *b){
	double *temp = malloc(sizeof(double));
	 /* Måste ge/sätta värdet i pekarena 
	 
	 temp = a, ger adressen till temp. 
	 Och detta kommer kunna sättas till variablerna utanför funktionen.
	 
	 Värden som ändras av pekarna är på den fysiska adressen de pekar på,
	 det innebär att variablerna utanför funktionen kommer få dessa värden.
	 
	 Detta fungerar för att vi skickade variablernas adresser till pekarna i funktionen,
	 som argument.
	 */
	 
	*temp = *a;
	*a = *b;
	*b = *temp;
	return;
}
