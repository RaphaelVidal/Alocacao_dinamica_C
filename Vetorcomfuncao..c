#include<stdio.h>
#include<stdlib.h>


int* aloca(int tam){ //recebe a qtd de posições obs: colocar int* na função
	int *p=(int *)calloc(tam,sizeof(int)); // aloca as posições em p
	return(p);	// retorna as posições para o main
}

int main(){
	
int tam,*p;

printf("Digite tamanho vetor: ");
scanf("%d",&tam);	

p=aloca(tam);// o ponteiro receberá o retorno da função passando a qtd de posições

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
