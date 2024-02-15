#include <stdio.h>
#include <string.h>
int al[26];
int main(void){
    int n,count,i,j;
    char str[105];
    char c;

    scanf("%d",&n);
    for(i = 0; i < n; i++){
        for(int k = 0; k < 26; k++){
            al[k] = 0;
        }
        scanf("%s",&str);
        c = str[0];
        for(j = 0; j < strlen(str); j++){
            if (al[str[j] - 'a'] >= 1) { 
                if (c != str[j]) {
                    count++;
                    break;
                }
            }
            al[str[j] - 'a']++;
            c = str[j];
        }
        
    }
    printf("%d",n-count);
}