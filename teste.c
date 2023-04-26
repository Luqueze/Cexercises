#include<stdio.h>

    int main(){
        //algoritmo para verificar se em uma matriz bidimensional com elementos 0 e 1, quais sao os elementos iguais a 1 que nao estao na borda da matriz
        int m[3][3], cont = 0;

        for(int i = 0;i < 3; i++){
            for(int j = 0;j < 3; j++){
                printf("Digite o valor da linha %d e coluna %d: ",i+1,j+1);
                scanf("%d",&m[i][j]);
            }
        }

        for(int i = 0;i < 3; i++){
            for(int j = 0;j < 3; j++){
                if(m[i][j] == 1){
                    if(i == 0 || i == 2 || j == 0 || j == 2){
                        cont++;
                    }
                }
            }
        }

        printf("A matriz tem %d elementos iguais a 1 que nao estao na borda",cont);

        return 0;
    }