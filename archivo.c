//int intercambiar(int numeroA, int numeroB){
	

//	int numeroC=0;
//	numeroC=&numeroA;
//	numeroA=&numeroB;
//	numeroB=numeroC;
//	return BMI;



int *BuscaNumero(int *valores, int elemento, int tamaño);
int *BuscaNumero(int *valores, int elemento, int tamaño){
	
        for(int i=0;i<tamaño;i++)
	    {

	     if (*(valores+i)==elemento)
		return(&valores[i]);
	     else
		break;
	    }





}

