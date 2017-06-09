#include <stdio.h>

void desglosar(char *fecha);
void intercambiar(int *a, int *b);

int main()
{
	char *fecha = "2017-06-06";

	int a = 2;
	int b = 3;	

	printf("Literal 1:\n");
	desglosar(fecha);

	printf("Literal 2:\n");

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

void intercambiar(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}