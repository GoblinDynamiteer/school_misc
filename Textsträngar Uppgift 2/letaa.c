#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define N 200

/*
UPPGIFT 2
Gör ett program som frågar efter en mening och rapporterar hur många a/A
det finns i meningen.
*/

int main()
{
    char a[N];
    system("chcp 1252");
    printf("Skriv en mening:");
    fgets(a, N, stdin);
    printf("Du skrev: %s",a);
    int raknare = 0;
    int i = strlen(a);
    while(i--){
        if(tolower(a[i]) == 'a'){
            raknare++;
        }
    }
    printf("Det är %d 'a/A' i meningen!", raknare);
    return 0;
}
