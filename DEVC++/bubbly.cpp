#include <stdio.h>

void printArray(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
}


int main(){
	int n = 7;
	int arr[n] = {15, 44, 55, 99, 77, 12, 90};
	
	for (int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				printArray(arr, n);
			}
		}
	}
	printf("\nFinal Result\n");
	printArray(arr, n);
	
	
	return 0;
}

/*
Bubbles, Bubbles! 
Suck.
*/
