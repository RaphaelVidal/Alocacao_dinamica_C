#include<stdio.h>
#include<stdlib.h>


int* aloca(int tam){ //recebe a qtd de posi��es obs: colocar int* na fun��o
	int *p=(int *)calloc(tam,sizeof(int)); // aloca as posi��es em p
	return(p);	// retorna as posi��es para o main
}

int main(){
	
int tam,*p;

printf("Digite tamanho vetor: ");
scanf("%d",&tam);	

p=aloca(tam);// o ponteiro receber� o retorno da fun��o passando a qtd de posi��es

for(int i=0;i<tam;i++){
	printf("Digite vetor %d: ",i);
	scanf("%d",&p[i]);
}
for(int j=0;j<tam;j++){
	printf("valor %d: %d \n",j,p[j]);
}


free(p);
	return 0;	
}
