#include <stdio.h>
#include <stdlib.h>
int main(void){
    char a[4],b[4],tmp;
    int c,d;
    scanf("%s %s",a,b);
    tmp = a[0];
    a[0] = a[2];
    a[2] = tmp;
    tmp = b[0];
    b[0] = b[2];
    b[2] = tmp;
    c = atoi(a);
    d = atoi(b);
    if(c>d){
        printf("%d",c);
    }else{
        printf("%d",d);
    }
}