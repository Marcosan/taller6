//int intercambiar(int numeroA, int numeroB){
	

//	int numeroC=0;
//	numeroC=&numeroA;
//	numeroA=&numeroB;
//	numeroB=numeroC;
//	return BMI;
#include <stdio.h>

int *BuscaNumero(int *valores, int elemento, int tamanio);

int main(){
	int a[] = {1,2,3,4,5,6};
	int elemento = 3;
	int tamanio = 6;
	int *puntero;
	
	puntero = BuscaNumero(a,elemento,tamanio);
	printf("Dirección del elemento: %x\n", puntero);
}



int *BuscaNumero(int *valores, int elemento, int tamanio){
	
	for(int i=0;i<tamanio;i++){
		if (*(valores+i)==elemento){
			return(&valores[i]);
		}
	}

	return 0;
}

