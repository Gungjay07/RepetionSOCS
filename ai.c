#include<stdio.h>

int main(){
	int T;
	int NN;
	int N[100000];
	scanf("%d", &T);
	
	int X = 1;
	while(0 < T) {
		int AA = 0;
		scanf("%d",&NN);
		int T2 = NN-1;
		int T4 = NN;
		
		int Y = 0;
		long long int D = 0;
		
		for(int i=0;i<NN;i++){
			scanf("%d",&N[i]);
		
			if(Y > 0)
			D += N[Y];
			
			Y++;}

		int T3 = 1;
		int B = 1;
		long int A = 0;
		long int C = 0;
		
		while(0 < T2) {
			while(A < T3) {
				C += N[A];
				A++;
			}
			if(T3 > 1) {
				D -= N[B];
				B++;
			}
			
			if(C == D) {
				AA++;
				break;
			}
			
			T3++;
			T2--;
		}
		
		if(AA > 0)
			printf("Case #%d: Yes\n", X);
		else
			printf("Case #%d: No\n", X);
		
		X++;
		T--;
	}
	
	return 0;
}