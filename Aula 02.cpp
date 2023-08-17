#include <stdio.h>
#include <stdlib.h>

int main()
{
	//ler VETOR
	int Tamanho = 100;
	int Vetor[Tamanho]; //  inicia pelo ZERO
	
   for(int i = 0; i <= 10; i++){
   		printf("Aula 02 --_VETOR_-- \n ");
       printf("Valor [%d]:", i);
       scanf("%d", &Vetor[i]);
   }
        printf("Valor: ");

       for(int i = 0; i <= 10; i++){
       printf("%d", Vetor[i]);
       
   }
    
    
}
