#include <stdio.h>
#include <stdlib.h>

int main(){

    int N;
    scanf("%d ", &N);

    int matrix[N][N];

    for (int l = 0; l < N; l++){
        for (int c = 0; c < N; c++){
            scanf("%d", &matrix[l][c]);
        }
    }
    int soma_linha[N]={0};
    int soma_col[N] = {0};
    for(int l=0;l<N;l++)
    {
        for(int c=0;c<N;c++)
        {
            soma_linha[l]+=matrix[l][c];
            soma_col[c]+=matrix[l][c];
        }
    }
    int total=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(soma_linha[i]+soma_col[j]-2*matrix[i][j]>total)
            {
               total =  soma_linha[i]+soma_col[j]-2*matrix[i][j];
            }
            
        }
    }
    printf("%d\n", total);
    return 0;
}