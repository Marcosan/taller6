#include <stdio.h>

void desglosar(char *fecha);

int main()
{
	char *fecha = "2017-06-06";
	desglosar(fecha);
}

void desglosar(char *fecha){
	int i;

	for (i = 0; i < strlen(fecha); i++){
		if(*(fecha + i) != '-'){
			if(i == 0){
				printf("\nAño: ");
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
}

