#include <stdio.h>

int main(){
    int cine[5][5];
    int i, j,opcion,quefila,quecolumna;
    
    float preciototal=0.0,precioporfila=0.0;
    //Seleccionando opcion en el menu
    printf("Que desea realizar?\n1.Vender\n2.Salir\nSeleccione opcion: ");
    scanf("%i",&opcion);
    //Salieno del programa
    if(opcion==2){
     printf("Caja cerrada");
    }
    //Vendiendo asientos
    else{
        for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cine[i][j]=cine[0][0];
        }
    }
    do{
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf(" %i ",cine[i][j]);
        }
        printf("\n");
    }
    //Preguntando al usuario en que fila y columna estara el asiento a comprar
    printf("En que fila se encuentra el asiento que desea comprar?");  
    scanf("%i",&quefila);
    
    printf("En que columna se encuentra el asiento que desea comprar?");  
    scanf("%i",&quecolumna);
    //Verificando si el asiento existe
    if(cine[quefila-1][quecolumna-1]==0){
        cine[quefila-1][quecolumna-1]=1;
        //Asignando precios de las filas
        if(quefila-1==0){
            precioporfila=5.0;
            preciototal+=precioporfila;
        }
        else if(quefila-1==1 || quefila-1==2 || quefila-1==3){
            precioporfila=3.50;
            preciototal+=precioporfila;
        }
        else if(quefila-1==4){
            precioporfila=2.50;
            preciototal+=precioporfila;
        }
        
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf(" %i ",cine[i][j]);
        }
        printf("\n");
    }
        
        printf("Asiento comprado con exito por %f \nEL precio total de de la caja es: %f",precioporfila,preciototal);
        
    }
    else{
        printf("EL Asiento seleccionado ya esta ocupado");
    }
    printf("Que desea realizar?\n1.Vender\n3.Salir\nSeleccione opcion: ");
    scanf("%i",&opcion);
    }while(opcion==1);
    }
    return 0;
}