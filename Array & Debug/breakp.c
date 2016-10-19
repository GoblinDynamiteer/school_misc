#include <stdio.h>
#include <stdlib.h>
#define N 100 //Antal värden i arrayen

/*
Inlämningsuppgift Moodle "Array1"
Johan Kämpe

Uppgift:
En array kan användas för att spara en serie resultat T.ex.
provresultat för en klass eller temperaturer för en månad
Skapa en array (int eller double), kom på ett användningsområde
Fyll den med minst 10 värden till arrayen,
antingen genom att läsa in eller sätta dem hårt
Skriv ut arrayen med radbrytning efter var tredje värde
*/

//funktionsdeklaration
void skrivut(int a[], int n);

int main(){
	//byte av teckenkodning för kommandotolken, för korrekt utskrift av ÅÄÖåäö
    system("chcp 1252");
    //Array med N t element.
	int array[N], i;
	//Fyller arraye med värden från 1 till N
	for(i=0; i<N;i++){
		array[i] = i+1;
	}
	printf("Lista för barn som vill lära sig räkna ner från hundra!:\n");
	skrivut(array,i);
return 0;
}

//Skriver ut arrayens värden.
//Parametrar är arrayen samt antal värden att skriva ut
void skrivut(int a[], int n){
    int radbryt = 3; //räknar tecken på rad, för radbrytning
    while(n--){ //while-loop kör tills n är 0
	printf("%4d\t",a[n]);
	radbryt--; //minskar med 1 för varje varv
	if(!radbryt){ //om radbryt är 0 triggar if-villkoret
        printf("\n"); //ny rad skrivs ut och radbryt sätts åter till 3
        radbryt=3;
	}
    }
return;
}
