#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12

void printMonth(int a, double res[], char *namn[]);
void printMv(double res[]);

int main(){
	int val;
	double resultat[MONTHS] = {22.3, 34.2, 21.6, 19.8, 19.5, 22.4, 31.6, 18.5, 17.4 ,22.4 ,23.6 ,25.0};
	char *manadNamn[MONTHS] = {"Januari", "Februari", "Mars", "April", "Maj", "Juni", "Juli", "Augusti", "September", "Oktober", "November", "December"};
	//int x = sizeof(resultat) / sizeof(resultat[0]);
	while(1){	
		system("cls");
		printf("\nSe resultat för månad\n");
		for(int i=0;i<MONTHS;i++){
			printf(" [%2d] %s\n", i+1, *(manadNamn)+1);
		}
		printf("\n [13] Medelvärde\n");
		printf("\nVAL: ");
		scanf("%d", &val);
		if(val == 13){
			printMv(resultat);
		}
		else{
			printMonth(val-1, resultat, manadNamn);
		}
	}
	return 0;
}

void printMonth(int a, double res[], char *namn[]){
	printf("Resultat för %s: %.2f\n", namn[a], res[a]);
	system("pause");
}

void printMv(double res[]){
	double summa = 0;
	for(int i=0;i<MONTHS;i++){
		summa += res[i];
	}
	printf("Medelvärde: %.2f\n", summa/MONTHS);
	system("pause");
}