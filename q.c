#include <stdio.h>

int main(){

    int t, n, x;
    scanf("%d", &t);

    for(int i = 1 ; i <= t; i++){
        scanf("%d %d", &n, &x); 
        int ans;
        if(n & 1){
            ans = x / 2;
            if((n - x) / 2 < ans){
                ans = (n - x) / 2;
            }
        } else {
            ans = x / 2;
            if((n - x + 1) / 2 < ans){
                ans = (n - x + 1) / 2;
            }
        }
        printf("Case #%d: %d\n", i, ans);
    }
}