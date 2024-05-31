#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 0;

    scanf("%d", &x);

    for(int a = 1; a <= x; a++){
        if(x % a == 0){
            printf("%d ", a);
        }
    }

    return 0;
}