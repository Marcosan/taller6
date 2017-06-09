#include <stdio.h>

void desglosar(char *fecha);
void intercambiar(int *a, int *b);
int *BuscaNumero(int *valores, int elemento, int tamanio);

int main()
{
	char *fecha = "2017-06-06";

	int valores[] = {1,2,3,4,5,6};
	int elemento = 3;
	int tamanio = 6;
	int *puntero;
	
	int a = 2;
	int b = 3;

	printf("Literal 1:\n");
	desglosar(fecha);

	printf("Literal 2:\n");
	puntero = BuscaNumero(valores,elemento,tamanio);
	printf("Dirección del elemento: %x\n\n", puntero);

	intercambiar(&a,&b);
	printf("Literal 3:\n");
	printf("Ahora a vale: %d\n",a);
	printf("Y b vale: %d\n",b);
}

void desglosar(char *fecha){
	int i;

	for (i = 0; i < strlen(fecha); i++){
		if(*(fecha + i) != '-'){
			if(i == 0){
				printf("Año: ");
			}
			printf("%c", *(fecha + i));
		} else{
			if(i == 4){
				printf("\nMes: ");
			}
			if(i == 7){
				printf("\nDía: ");
			}
		}
		
	}
	printf("\n\n");
}

int *BuscaNumero(int *valores, int elemento, int tamanio){
	
	for(int i=0;i<tamanio;i++){
		if (*(valores+i)==elemento){
			return(&valores[i]);
		}
	}

	return 0;
}

void intercambiar(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}