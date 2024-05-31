#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, seq = 0;

    scanf("%d", &N);

    int vet[N]; 

    for (int i = 0; i < N; i++){
        scanf("%d", &vet[i]);
        
    }
    for (int i = 0; i < N - 2; i++){
        if (vet[i] == 1 and vet[i+1] == 0 and vet[i+2] == 0){
            seq++;
        }
    }
    
    printf("%d\n", seq); 


    return 0;
}