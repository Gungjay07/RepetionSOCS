#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    for (int a = 1; a <= t; a++){
        int n;
        scanf("%d", &n);
        printf("Case #%d:\n", a);

        for(int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++)
            {
                if(j <= n - i){
                    printf(" ");
                }else if((i + j) % 2 == 0){
                    printf("*");
                }else{
                    printf("#");
                }
            }
            printf("\n");
        }    
    }
    
    
    

    return(0);
}