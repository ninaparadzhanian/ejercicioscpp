/*Ejercicio 3 calcular mediante dos variables inicializadas a 20 y a 10
respectivamente la suma, resta mult y division de estas dos variables*/
#include <stdio.h>
#include <stdlib.h>

main(void){
    /*declracion de variables y datos*/
    int dato1, dato2, resultado;

    dato1=20;
    dato2=10;
    //suma
    resultado= dato1+dato2;
    printf("%d+%d=%d\n", dato1, dato2, resultado);

    //resta
    resultado= dato1-dato2;
    printf("%d-%d=%d\n", dato1, dato2, resultado);

    //multiplicacion 
    resultado= dato1*dato2;
    printf("%d*%d=%d\n", dato1, dato2, resultado);

    //division
    resultado= dato1/dato2;
    printf("%d/%d=%d\n", dato1, dato2, resultado);

    return 0;
    system("pause");


}