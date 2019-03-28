#include <stdio.h>
#include <stdlib.h>
#define F 15
void cargar_matriz(int **matriz,int C);

int main(){
	srand(time(NULL));
	int i;
	int **matriz;//Declaro Matriz.
	int C = 5+(rand()%(16-5));//declaro C como un numero aleatorio entre 5 y 15.

	//Le asigno memoria a la matriz.
	matriz = (int**)malloc(sizeof(int*)*F);

	//Le otorgo un lugar en la memoria a cada puntero del arreglo.
	for(i=0;i<F;i++){
		//A cada puntero le asigno memoria segun el numero de columnas.
		matriz[i]=(int*)malloc(sizeof(int)*C);
	}

	//Cargar matriz.
	cargar_matriz(matriz,C);

	return 0;
}

void cargar_matriz(int **matriz,int C){
	int i,j;
	for(i=0;i<F;i++){
		for(j=0;j<C;j++){
			*(*(matriz+i)+j)=100+(rand()%(1000-100));
		}
	}
}
