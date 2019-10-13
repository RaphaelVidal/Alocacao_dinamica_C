#include<stdio.h>
#include<stdlib.h>
int main(){	
int i;
printf("Digite tamanho vetor: ");
scanf("%d",&i);	
int *p = (int *)calloc(i,sizeof(int));
for(int cont=0;cont<i;cont++){
	printf("Digite vetor %d: ",cont);
	scanf("%d",&p[cont]);
}
for(int resp=0;resp<i;resp++){
	printf("valor %d: %d \n",resp,p[resp]);
}
free(p);
	return 0;	
}
