#include <stdio.h>

int main() {
    int T;
    long int A;
    long int total = 0;
    
    scanf("%d", &T);
    
    for(int i = 0; i<T; i++){
    		scanf("%ld", &A);
    		if(A>=0){
    		total += A; 
    		}
    	}	

	printf("%ld\n", total);
    return 0;
}