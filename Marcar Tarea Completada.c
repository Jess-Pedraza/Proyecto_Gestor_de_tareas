//Ariadna Origel - Proyecto Final//
//Marcar una tarea como completada//
#include<stdio.h>

void MarcarCompletada() //Ariadna
{
    int numtarea;
    if (totalTareas > 0) {
        printf("Ingrese el numero de tarea que desea marcar como completada: ");
        scanf("%d", &numtarea);

        if (numtarea >= 1 && numtarea <= totalTareas) {
            GestorTareas[numtarea - 1].estado = 1;
            printf("Tarea marcada como completada.\n");
        } else {
            printf("Numero de tarea no válido.\n");
        }
    } else {
        printf("No hay tareas para marcar como completadas.\n");
    }
}
