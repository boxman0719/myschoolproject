#include <stdio.h>

int main(){
	int mon;
	printf("How's it going? What month is it today? \n");
	scanf("%d", &mon);
	
	if(mon == 1){
		printf("It's winter!");
	}else if(mon == 2){
		printf("In the bleak midwinter;");
	}else if(mon == 3){
		printf("Spring");
	}else if(mon == 4){
		printf("Spring");
	}else if(mon == 5){
		printf("Spring");
	}else if(mon == 6){
		printf("Summer");
	}else if(mon == 7){
		printf("Summer");
	}else if(mon == 8){
		printf("Summer");
	}else if(mon == 9){
		printf("autumn");
	}else if(mon == 10){
		printf("autumn");
	}else if(mon == 11){
		printf("autumn");
	}else if(mon ==12){
		printf("Winter");
	}else{
		printf("I guess, you do not know what is season.");
	}
}
