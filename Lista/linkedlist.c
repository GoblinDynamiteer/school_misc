#include <stdio.h>
#include <stdlib.h>

struct node{
	int siffra;
	struct node *next;
};

struct node *first;
struct node *current;
struct node *new;

void addListItem(void);
void initList(void);
void printList(void);

int main(){

	initList();
	current -> siffra = 2;

	for(int i=0;i<10;i++){
		addListItem();
		current -> siffra = 4+i;
	}
	printList();
}

void printList(void){
	current = first;
	while(1){
		printf("%d\n", current -> siffra);
		if(!current -> next){
			return;
		}
		current = current -> next;
	}
}

void initList(void){
	first = (struct node *)malloc(sizeof(struct node));
	if(first == NULL){
		printf("Det gick fel!");
		return;
	}
	current = first;
	current -> next = NULL;
}

void addListItem(void){
	new = (struct node *)malloc(sizeof(struct node)); //Skapar en ny struct node i minnet
	if(new == NULL){
		printf("Det gick fel!");
		return;
	}
	current -> next = new; //Next pekar på nya structen
	current = new;	//Sätter current till nya
	current -> next = NULL; //Next till NULL (Slut på list-items)
}