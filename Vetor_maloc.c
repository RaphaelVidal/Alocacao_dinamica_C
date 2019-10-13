#include <stdio.h>
#include <stdlib.h>

int *criarVetor(int n);
void exibirVetor(int *vetor, int numElementos);

void main(){
	int *vet = criarVetor(5);
	exibirVetor(vet, 5);
}

int *criarVetor(int n){
	int *vetor = (int*)malloc(n*sizeof(int));
	int i = 0;
	for(;i<n;i++)
	    vetor[i] = i;
	return vetor;
}
void exibirVetor(int *vetor, int numElementos){
	int i = 0;
	for(;i<numElementos;i++)
	    printf("%d\n", vetor[i]);
	free(vetor);
}
