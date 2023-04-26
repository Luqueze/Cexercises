#include<stdio.h>

    int main(){

        /* algoritmo para verificar se em uma matriz bidimensional com elementos 0 e 1, quais sao os elementos iguais a 1
        que nao estao na borda da matriz */ 
        int m[6][6], cont = 0;

        for(int i = 0;i < 6; i++){
            for(int j = 0;j < 6; j++){
                printf("Digite o valor da linha %d e coluna %d: ",i+1,j+1);
                scanf("%d",&m[i][j]);
            }
        }

        for(int i = 0;i < 6; i++){
            for(int j = 0;j < 6; j++){
                if(m[i][j] == 1){
                    if(i == 0 || i == 5 || j == 0 || j == 5){
                        cont++;
                    }
                    else if(m[i-1][j] == 1 || m[i+1][j] == 1 || m[i][j-1] == 1 || m[i][j+1] == 1){
                        cont++;
                    }
                }
            }
        }

        printf("A matriz tem %d elementos iguais a 1 que nao estao na borda",cont);

        return 0;


    }