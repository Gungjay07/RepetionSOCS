#include<stdio.h>

int main(){
	int nw, na;
	scanf("%d %d", &nw, &na);getchar();
	
	int maxw=-1;
	int x[nw];
	for(int i=0; i<nw; i++){
		scanf("%d", &x[i]);getchar();
		if(x[i]>maxw){
			maxw=x[i];
		}
	}
	
	int maxa=-1;
	int y[na];
	for(int i=0; i<na; i++){
		scanf("%d", &y[i]);getchar();
		if(y[i]>maxa){
			maxa=y[i];
		}
	}
	
	if(maxw>maxa){
		printf("The dark secret was true\n");
	}else{
		printf("Secret debunked\n");
	}
	
	return 0;
}