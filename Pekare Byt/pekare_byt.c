#include <stdio.h>

//void swap(int *a, int *b);
void swapVoid(void *av, void *bv);

int main(){
	int a = 10, b = 20;
	printf("innan byte:\na: %d b: %d\n", a, b);
	swapVoid(&a, &b);
	char s[30];
	sprintf(s, "efter byte: \na: %d  b: %d", a, b);
	puts(s);
	return 0;
}

/* void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
} */

void swapVoid(void *av, void *bv){
	int temp;
	int *a = av, *b = bv;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}