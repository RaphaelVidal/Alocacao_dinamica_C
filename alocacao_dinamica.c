#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){

	int *a=(int *)malloc(sizeof(int));

	if(a==NULL){
		printf("erro de alocação!");
	}else{
		printf("alocacao realizada!\n");
		printf("Digite valor: ");
		scanf("%d",&a);
		printf("Valor: %d",a);	
	}
	free(a);
	return 0;	
}
