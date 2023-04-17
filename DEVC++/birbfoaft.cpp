#include <stdio.h>

int main(){
	int bircir, birday, birmon, tocir, tomon, today;
	printf("When is your birthday? Type in MMDD\n");
	scanf("%d", &bircir);
	printf("What is the date today? Type in MMDD\n");
	scanf("%d", &tocir);
	birmon = bircir / 100;
	birday = bircir % 100;
	tomon = tocir / 100;
	today = tocir % 100;
	if(birmon == tomon){
		if (birday == today){
		printf("Today is your birthday!");
		}else if(birday < today){
			printf("It was passed, but not far");
		}else{
			printf("your birthday will be soon");
		}
	}else if(birmon > tomon){
		printf("Still far");
	}else{
		printf("Already gone. Wait for next year");
	}
	return 0;
}
