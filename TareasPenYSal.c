#include <stdio.h>
#include <string.h>

//Miryam
struct MaximoDeTareas {
    char nombre[50];
    char materia[33];
    char fecha[15];
    int estado;
} GestorTareas[100];

int totalTareas = 0;
void listarTareasPendientes(); //Miryam
void imprime_salida(); //Miryam

int main() //Jessica
{

    listarTareasPendientes();
    imprime_salida();


    return 0;
}


void listarTareasPendientes() //Miryam
{
    printf("Lista de tareas pendientes:\n");

    int hayPendientes = 0;

    for (int i = 0; i < totalTareas; i++) {
        if (GestorTareas[i].estado == 0) {
            printf("Tarea %d:\n", i + 1);
            printf("Nombre: %s\n", GestorTareas[i].nombre);
            printf("Materia: %s\n", GestorTareas[i].materia);
            printf("Fecha de entrega: %s\n\n", GestorTareas[i].fecha);
            hayPendientes = 1;
        }
    }

    if (!hayPendientes) {
        printf("No hay tareas pendientes.\n");
    }
}


void imprime_salida() //Miryam
{
    printf("\n *-*-*-*-*-*-*-*-* \n");
    printf("Proyecto final\n");
    printf("CUCEI Progamacion Estructurada\n");
    printf("25 de noviembre de 2023\n");
}
