#include <stdio.h>
#include <string.h>
#define N 200
#define FIL "secret.txt"

void skrivUt(int n, char *s);

int main(){
	char string[N];
	FILE *superfil = fopen(FIL, "r");
	printf("TEXTFILENS INNEHÅLL:\n");
	while(fgets(string, N, superfil) != NULL){
		puts(string);
	}
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