#include <stdio.h>
#include <string.h>
#define N 200

void skrivUt(int n, char *s);

int main(){
	char string[N];
	FILE *superfil = fopen("hemligfil.txt", "w");
	printf("Skriv en text: ");
	fgets(string, N, stdin);
	fputs(string, superfil);
	//skrivUt(strlen(string), string);
	return 0;
}

void skrivUt(int n, char *s){
	printf("Du skrev: ");
	for(int i=0;i<n;i++){
		putchar(*s++);
		putchar('*');
	}
	return;
}