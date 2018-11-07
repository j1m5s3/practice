#include <stdio.h>
#include <stdlib.h>

#define MAX_INDEX 10

int main(){
	int arr[MAX_INDEX];
	int i, MAX;
	char clear;
	
	for(i = 0; i < MAX_INDEX; i++){
		printf("Enter value for arr[i]: ");
		scanf("%d", &arr[i]);
		printf("You entered %d\n",arr[i]);
		
		while(getchar() != '\n');
	}
	
	for(i = 0; i < MAX_INDEX; i++){
		if(arr[i] > arr[i+1]){
			MAX = arr[i];
		}
		else {
			MAX = arr[i+1];
		}
	}
	
	printf("The largest number in the arr is %d\n", MAX);
	return 0;
}
	
	
	
	
	
	
	