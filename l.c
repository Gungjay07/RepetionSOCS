#include <stdio.h>
int main (){
	int N;
	int jojo, lili, bibi;
	int peserta;
	int total = 0;
	int X = 0;
	
	scanf("%d", &N);
	scanf("%d %d %d", &jojo, &lili, &bibi);
		
		for(int j=1; j<=N; j++){
			scanf("%d", &peserta);
			X += peserta;
			total = (jojo+lili+bibi) + X;
			total /= (N+3);
		}

	if(total > jojo && total > lili && total > bibi){
		printf("Jojo tidak lolos\nLili tidak lolos\nBibi tidak lolos\n");
	}
	else if(total > jojo && total > lili){
		printf("Jojo tidak lolos\nLili tidak lolos\nBibi lolos\n");
	}
	else if(total > jojo && total > bibi){
		printf("Jojo tidak lolos\nLili lolos\nBibi tidak lolos\n");
	}
	else if(total > lili && total > bibi){
		printf("Jojo lolos\nLili tidak lolos\nBibi tidak lolos\n");
	}
	else if(total > jojo){
		printf("Jojo tidak lolos\nLili lolos\nBibi lolos\n");
	}
	else if(total > lili){
		printf("Jojo lolos\nLili tidak lolos\nBibi lolos\n");
	}
	else if(total > bibi){
		printf("Jojo lolos\nLili lolos\nBibi tidak lolos\n");
	}
	else{
		printf("Jojo lolos\nLili lolos\nBibi lolos\n");
	}

	return 0;	
}