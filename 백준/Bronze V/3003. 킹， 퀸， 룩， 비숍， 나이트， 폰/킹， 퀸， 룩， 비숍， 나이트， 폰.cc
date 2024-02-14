#include <stdio.h>
int main(void){
    int w[6];
    for(int i = 0; i < 6; i++){
        scanf("%d ",&w[i]);
    }
    for(int i = 0; i < 6; i++){
        if(i == 5){
            printf("%d ",8 - w[i]);
        }else if(i == 0 || i == 1){
            printf("%d ",1 - w[i]);
        }else{
            printf("%d ",2 - w[i]);
        }
        
    }
}