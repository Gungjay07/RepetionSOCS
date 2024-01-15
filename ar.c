#include <stdio.h>

int main() {
	int tes;
	scanf("%d",&tes);
	int n  ;
    scanf("%d",&n);
	for(int a=0;a<tes;a++){
    	for (int i = 1; i <= n; i++) {
     
       	 	for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        		for (int k = 1; k <= i; k++) {
            printf("*");
        }
        
        printf("\n");
    }}

    return 0;
}