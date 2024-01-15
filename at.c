#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);getchar();
	
	int x;
	for(int a=0; a<t; a++){
		scanf("%d", &x);getchar();
		
		for(int i=0; i<x; i++){
	        for(int j=0; j<(x-i-1); j++){
	            printf(" ");
	        }
	        for(int j=0; j<(i*2)+1; j++){
	            printf("*");
	        }
	        puts("");
	    }
	
	}
	
	return 0;
}