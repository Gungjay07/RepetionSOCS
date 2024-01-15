#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);getchar();
	
	int steps[n];
	for(int i=0; i<n; i++){
		scanf("%d", &steps[i]);getchar();
	}
	
	int temp;
	for (int i = 0; i<n; i++){
       if(i==0){
           temp = steps[0];
       }
       else if(steps[i] <= temp){
              printf("%d ", temp);
              temp = steps[i];
            if( i == n-1) printf("%d\n", temp);
       }
       else if( i == n-1) printf("%d\n", steps[i]);
       else temp = steps[i];
    }

	return 0; 
}