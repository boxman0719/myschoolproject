#include <stdio.h>

int main(){
	
	int size;
	
	char name[10][1024];
	printf("How much names? (<=10)\n");
	scanf("%d", &size);
	printf("Input names\n");
	for(int i = 0; i <= size; i++){
	gets(name[i]);	
	}
	
	for(int j = 0; j <= size; j++){
		printf("\n%s", name[j]);
	}
	
	
	return 0;
}
