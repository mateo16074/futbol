/*Una vez que se hayan ingresado todos los equipos, el programa debe preguntar al usuario si desea
 ingresar manualmente los resultados de los partidos o si prefiere que estos se generen automáticamente 
 de manera aleatoria.*/


#include <stdio.h>
#include <string.h>

void resultadosdelospartidos(int resultado1, int opcion){

    
    printf("¿Deseas ingresar manualmente los resultados de los partidos?\n");
    printf("1. Sí\n");
    printf("2. No\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);
    
    if (opcion == 1) {

        printf("ingrese los puntos del equipo 1\n");
        scanf("%d",resultado1);
        
    // } else if (opcion == 2) {
       
        
    // } else {
    //     printf("Opción inválida.\n");
    // }
    
    
}



