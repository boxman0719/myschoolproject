#include <stdio.h>

struct character{
	char name[20];
	int atk[20];
	int def[20];
	int sped[20];
};

int main(){
	int size;
	struct character info[20];
	
	printf("Characters count: ");
	scanf("%d", &size);
	
	for(int i = 0; i < size; i++){
	printf("Character Name : ");
	gets(info[i].name);
	printf("Attack Power : ");
	scanf("%d", &info.atk);
	printf("Defence Possiblity : ");
	scanf("%d", &info[i].def);
	printf("Action Agility");
	scanf("%d", info[i].sped);		
	}
	
	printf("\n\n\n");

	for(int i = 0; i < size; i++){
	printf("Character name : %s\n", info[i].name);
	printf("Attack Power : %s\n", info[i].atk);
	printf("Defence Possiblity : %s\n", info[i].def);
	printf("Action Agility: %s\n\n", info[i].sped);
}
	printf("\nNicenesses");
	return 0;
}
