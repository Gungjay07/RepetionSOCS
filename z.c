#include<stdio.h>

int main(){
	int N, k;
	int Pos = 0;
	scanf("%d", &N);
	
	for (int i=0; i<N; i++){
		scanf("%d", &k);
		Pos += k;
		if (Pos == 30) {
        	Pos = 10;
    	}
		if (Pos == 12) {
  		    Pos = 28;
    	}
		if (Pos == 35) {
        	Pos = 7;
    	}
    	if (Pos > 39){
    		Pos %= 40;
		}	
	}

	printf("%d\n", Pos);
    
	return 0;
}