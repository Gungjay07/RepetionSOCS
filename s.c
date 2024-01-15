#include <stdio.h>

int main (){
	int T;
	int A;
	
	scanf("%d %d", &T, &A);
	
	int array[T];
	
	for(int i = 1; i<=T; i++){
		scanf("%d", &array[i]);
		}
		
	int count = 0;
	
		for(int i= 1; i<=T; i++){
			if(array[i] < A){
				count++;
			}
		}
	printf("%d\n", count);	
	

	
	return 0;
}