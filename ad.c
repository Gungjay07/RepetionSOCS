#include<stdio.h>

int main(){
	long int n,x,max=0,maxx=0;
	scanf("%ld",&n);
	int arr[1000]={0};
	for(int i=0;i<n;i++){
	
		
		scanf("%d",&x);
			if (i==0){
			maxx=x;
		}
		if(x>maxx){
			maxx=x;
		}
		arr[x]++;
		
	}
	max=arr[1];
	for(int i=1;i<=maxx;i++){
		if(arr[i]>max){ 
			max=arr[i];
		}}
		printf("%d\n",max);
		
	return 0;
}