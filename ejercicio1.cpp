#include <stdio.h>
#include <stdlib.h>

main(void){
    /*Definir las variables c, i, f y d*/
    char c;
    int i;
    float f;
    double d;

    /* asignar las variables c, i, f y d*/
    c='a';
    i=25;
    f=3.1416F;
    d=2.7172;

    /*Mostrar los valores en la pantalla */
    printf("c vale %c\n", c);
    printf("i vale %d\n", i);
    printf("f vale %f\n", f);
    printf("c vale %f\n", d);
    return 0;
    system("pause");
}