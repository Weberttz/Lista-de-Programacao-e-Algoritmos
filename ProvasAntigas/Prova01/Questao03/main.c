#include <stdio.h>
#include <stdlib.h>

int main(){
	int linhas = 4, colunas = 5, indices[linhas];
	float maior = 0, medias[4] = {0}, matriz[linhas][colunas];
	
	for(int i=0; i<linhas; i++){
		for(int j = 0; j<colunas; j++){
			scanf("%f", &matriz[i][j]);
			if(maior < matriz[i][j]){
				maior = matriz[i][j];
			}
		}
	}
	
	for(int i=0; i<linhas; i++){
		for(int j = 0; j<colunas; j++){
			matriz[i][j]/=maior;
			medias[i] += matriz[i][j];
		}
		indices[i] = i;
		medias[i]/= colunas;
	}

	float nova_matriz[linhas][colunas];

	for(int i=0; i<linhas; i++){
		for(int j=i+1; j<colunas; j++){
			if(medias[i] < medias[j]){
				float aux = medias[i];
				medias[i] = medias[j];
				medias[j] = aux;
				int temp = indices[i];
				indices[i] = indices[j];
				indices[j] = temp;
			}
		}
	}

	for(int i=0; i<linhas; i++){
		for(int j = 0; j<colunas; j++){
			nova_matriz[i][j] = matriz[indices[i]][j];
		}
	}

    printf("\n");

	for(int i=0; i<linhas; i++){
		printf("A media do rio %d eh: %f\n", indices[i], medias[i]); 
	}

	printf("\nMatriz Original\n\n");

	for(int i=0; i<linhas; i++){
		for(int j = 0; j<colunas; j++){
			printf("%.2f ", matriz[i][j]);
		}
		printf("\n");
	}

    printf("\nMatriz Ordenada\n\n");
	for(int i=0; i<linhas; i++){
		for(int j = 0; j<colunas; j++){
			printf("%.2f ", nova_matriz[i][j]);
		}
		printf("\n");
	}

	
 	return 0;
}


