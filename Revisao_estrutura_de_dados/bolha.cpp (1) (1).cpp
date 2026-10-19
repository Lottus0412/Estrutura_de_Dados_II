#include <stdio.h>

//EScreva um algoritmo que ordene 5 valores inteiros de forma crescente 
int vetor[5]={5,3,1,4,2};

int main () {
    int qtd = 5;
    int aux; 
    
    printf("\n Vetor original: ");
    for (int i=0; i<qtd; i++)
        printf("%i,", vetor[i]);
        
    for (int i=0; i<qtd-1; i++) { //Percorrendo o arranjo por fora
        for (int j=0; j<qtd-1; j++){ //Para cada elemento do arranjo, compara com todos os demais valores
            if (vetor[j]>vetor[j+1]) { //Se elemento atual sor maior que seu vizinho
                aux = vetor[j];     //então realizamos a troca de posição dos valores
                vetor[j] = vetor[j+1]; //Auxiliar recebe o valor da posição
                vetor[j+1] = aux;       //Depois a posição atual recebe o valor do vizinho
            }                           //O vizinho recebe o valor de Auxiliar
        }
    }
    
     printf("\n Vetor ordenado: ");
    for (int i=0; i<qtd; i++)
        printf("%i,", vetor[i]);
        
        for (int i=0; i<qtd-1; i++) {
        for (int j=0; j<qtd-1; j++){ 
            if (vetor[j]<vetor[j+1]) { 
                aux = vetor[j];    
                vetor[j] = vetor[j+1]; 
                vetor[j+1] = aux;       
            }                        
        }
    }
    
      printf("\n Vetor Decrescente: ");
    for (int i=0; i<qtd; i++)
        printf("%i,", vetor[i]);
    
}