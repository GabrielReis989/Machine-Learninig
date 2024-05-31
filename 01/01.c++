#include <stdlib.h>
#include <stdio.h>

int main(){
    int a,b, total = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    total = a +b;

    if (total % 2 == 1){
        printf("Cino\n");
    }else{
        printf("Bino\n");
    }
    

    return 0;
}