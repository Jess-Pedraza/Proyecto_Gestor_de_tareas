//Ariadna Origel - Proyecto Final//
//Listar todas las tareas//
#include<stdio.h>

void ListarTareas() //Ariadna
{
    int i;
    printf("Lista de todas las tareas...\n");
    for(i=0; i<totalTareas; i++)
    {
        printf("Tarea %d:\n", i + 1);
        printf("Nombre: %s\n", GestorTareas[i].nombre);
        printf("Materia: %s\n", GestorTareas[i].materia);
        printf("Fecha de entrega: %s\n", GestorTareas[i].fecha);
    }
}
