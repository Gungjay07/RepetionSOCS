#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);getchar();
	
	int n;
	for(int i=0; i<t; i++){
		scanf("%d", &n);getchar();
		
		for(int j=1; j<=n; j++){
			for(int k=1; k<=n; k++){
				if(j==1||j==n||k==1||k==n||j==k||k==n-j+1){
					printf("*");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}