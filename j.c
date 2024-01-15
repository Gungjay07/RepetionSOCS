#include <stdio.h>
int main (){
	int T;
	scanf("%d", &T);
	
	for(int i=1; i<=T; i++){
		int N;
		scanf("%d", &N);
		long int total = 0;
		
		for(int j=0; j<N; j++){
			long int B;
			scanf("%ld", &B);

			total += B;
		}
		printf("Case #%d: %ld\n", i, total);
	}
	return 0;
}