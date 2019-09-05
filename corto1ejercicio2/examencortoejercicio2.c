#include<stdio.h>

int main(){
	int i, eliminar, posicion,n;
	
	//Asignandole un tamaño n al vector
	printf("¿Cual ser el tamaño del vector?: ");
	scanf("%i",&n);
	
	int vector[n];
	
	//Llenando el vector segun el usuario
	for(i=0;i<n;i++){
		printf("Introduzca valor de la posicion %i: ",i+1);
		scanf("%i",&vector[i]);
	}
	printf("\nMostrando Vector :\n");
        
	//Mostrando vector 
	for(i=0;i<n;i++){
		printf("Elemento [%i] Posicion %i = %i\n",i,i+1,vector[i]);
	}

	//Eliminando elemento del vector segun posicion del usuario
	printf("\n¿Que posicion desea eliminar?: ");
	scanf("%i",&posicion);
	
	if(posicion>n){
		printf("El valor colocado es mayor al tamaño del vecto");
	}
	else{
		eliminar = vector[posicion-1];
		for(i=0;i<n;i++){
			if(i==(posicion-1)){
				while(i<n){
					vector[i] = vector[i+1];
					i++;
				}
				break;
			}
		}
	printf("\nMostrando Vector :\n");
		n-=1;
		for(i=0;i<n;i++){
			printf("Elemento [%i] Posicion %i = %i\n",i,i+1,vector[i]);
		}
		
		printf("\nNumero eliminado: %i",eliminar);
	}
	return 0;
}