#include<stdio.h>
#include<stdlib.h>
int main(){	
int linhas,colunas;
printf("Digite qtd linhas vetor: ");
scanf("%d",&linhas);
printf("Digite qtd colunas vetor: ");
scanf("%d",&colunas);	

int **p = (int **)calloc(linhas,sizeof(int*)); // ALOCA AS LINHAS DA MATRIZ

for(int t=0;t<linhas;t++){ // estrutura para alocar as colunas para cada linha
		p[t]=(int *)calloc(colunas,sizeof(int));	//colunas da matriz para cada linha
}

for(int i=0;i<linhas;i++){
	for(int j=0;j<colunas;j++){
		printf("[%d,%d]Digite vetor: ",i,j);
		scanf("%d",&p[i][j]);
	}
}
for(int f=0;f<linhas;f++){
	for(int k=0;k<colunas;k++){
			printf("[%d,%d] valor: %d ",f,k,p[f][k]);
	}
	printf("\n");
}
for (int var=0; var<colunas; var++) free (p[var]);// LIBERA AS COLUNAS DE CADA LINHA
free(p); //LIBERA AS LINHAS

	return 0;	
}
