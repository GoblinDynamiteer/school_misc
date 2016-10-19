#include <stdio.h>
#include <stdlib.h>
#define N 100 //Antal v�rden i arrayen

/*
Inl�mningsuppgift Moodle "Array1"
Johan K�mpe

Uppgift:
En array kan anv�ndas f�r att spara en serie resultat T.ex.
provresultat f�r en klass eller temperaturer f�r en m�nad
Skapa en array (int eller double), kom p� ett anv�ndningsomr�de
Fyll den med minst 10 v�rden till arrayen,
antingen genom att l�sa in eller s�tta dem h�rt
Skriv ut arrayen med radbrytning efter var tredje v�rde
*/

//funktionsdeklaration
void skrivut(int a[], int n);

int main(){
	//byte av teckenkodning f�r kommandotolken, f�r korrekt utskrift av ������
    system("chcp 1252");
    //Array med N t element.
	int array[N], i;
	//Fyller arraye med v�rden fr�n 1 till N
	for(i=0; i<N;i++){
		array[i] = i+1;
	}
	printf("Lista f�r barn som vill l�ra sig r�kna ner fr�n hundra!:\n");
	skrivut(array,i);
return 0;
}

//Skriver ut arrayens v�rden.
//Parametrar �r arrayen samt antal v�rden att skriva ut
void skrivut(int a[], int n){
    int radbryt = 3; //r�knar tecken p� rad, f�r radbrytning
    while(n--){ //while-loop k�r tills n �r 0
	printf("%4d\t",a[n]);
	radbryt--; //minskar med 1 f�r varje varv
	if(!radbryt){ //om radbryt �r 0 triggar if-villkoret
        printf("\n"); //ny rad skrivs ut och radbryt s�tts �ter till 3
        radbryt=3;
	}
    }
return;
}
