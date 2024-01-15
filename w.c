#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);getchar();
	
	int n;

	for(int i=0; i<t; i++){
		scanf("%d", &n);getchar();
		
		int num[n];
		int odd=0, even=0;
		for(int j=0; j<n; j++){
			scanf("%d", &num[j]);getchar();
			
			if(num[j]%2==0){
				even++;
			}else{
				odd++;
			}
		}
		printf("Odd group : %d integer(s).\nEven group : %d integer(s).\n", odd, even);
		printf("\n");
	}
	
	return 0;
}