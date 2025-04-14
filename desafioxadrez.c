#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casast){
if ( casast>0 ){
    moverTorre (casast-1);
    printf("Direita:%d\n",casast);
 }
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casasb){
    if ( casasb>0){
        moverBispo (casasb-1);
        printf("Cima, Direita:%d\n",casasb);
    }
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casasr){
    if ( casasr>0){
        moverRainha (casasr-1);
        printf("Esquerda:%d\n",casasr);
    }
}

// Função recursiva para o movimento do Cavalo
void moverCavalo(int casac){
    
    while (casac--)
    
    {
        for ( int c = 1; c <=  2; c++)
        {
        printf("Cima:%d\n",c);
        } 
        int d = 1;
        printf("Direita:%d\n",d);
    }
}

int main (){
    
    // Movimentos da Torre
    printf("Movimentos da Torre:\n");
    moverTorre(5);

    // Movimentos do Bispo
    printf("\nMovimentos do Bispo:\n");
    moverBispo(5);

    // Movimentos da Rainha 
    printf("\nMovimentos da Rainha:\n");
    moverRainha(8);
    
    // Movimentos do Cavalo
    printf("\nMovimentos do Cavalo:\n");
    moverCavalo(1);


    return 0;
}

