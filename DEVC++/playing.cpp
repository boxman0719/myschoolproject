#include <stdio.h>
#include <windows.h>


enum ColorType {
BLACK = 0,  	//0
darkBLUE,	//1
DarkGreen,	//2
darkSkyBlue,    //3
DarkRed,  	//4
DarkPurple,	//5
DarkYellow,	//6
GRAY,		//7
DarkGray,	//8
BLUE,		//9
GREEN,		//10
SkyBlue,	//11
RED,		//12
PURPLE,		//13
YELLOW,		//14
WHITE		//15
};

void textcolor(int colorNum) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
}

int main(void){
int num = 1;
int tring = 1;

while(num = 1){

printf("Funny programming class \n\n");
Sleep(100);
printf("Fatal Error!%d\n\n", tring);
tring++;
}
return 0;
}
