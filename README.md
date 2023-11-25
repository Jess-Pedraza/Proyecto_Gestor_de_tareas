# Proyecto_Gestor_de_tareas
#include <stdio.h>
#include <string.h>
#define MAX_TAREAS 9
//Miryam
struct Tarea {
    char titulo[50];
    char materia[50];
    int dia;
    int mes;
    char situacion[50];
};

struct Tarea tareas[MAX_TAREAS]; //miryam
int totalTareas = 0;
void AgregarTarea();
void listarTareasPendientes(); //Miryam
void imprime_salida(); //Miryam

int main() {
    int op;

    do {
        printf("\n");
        printf("\t%cBIENVENIDO%c\n", 173, 33);
        printf("Ingrese el numero de la opcion deseada:\n 1.Agregar una nueva tarea\n 2.Marcar una tarea como completada\n ");
        printf("3.Listar todas las tareas pendientes\n 4.Listar todas las tareas\n 5.Buscar una tarea por titulo\n 6.Salir\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                AgregarTarea();
                break;

            case 2:
       
                break;

            case 3:
                listarTareasPendientes();
                break;

            case 4:
           
                break;

            case 5:
       
                break;

            case 6:
                imprime_salida();
                printf("Usted ha salido del programa...");
                break;

            default:
                printf("ERROR, Elija una opcion del 1 al 6\n");
                break;
        }
    } while (op != 6);

    return 0;
}
//agregue para que el struct pueda recorrer el arreglo de las tareas y ver si hay alguns pendiente
void AgregarTarea() {
    if (totalTareas < MAX_TAREAS) {
        printf("Agrega el titulo de la tarea: ");
        scanf("%s", tareas[totalTareas].titulo);
        printf("Materia: ");
        scanf("%s", tareas[totalTareas].materia);
        printf("Dia: ");
        scanf("%d", &tareas[totalTareas].dia);
        printf("Mes: ");
        scanf("%d", &tareas[totalTareas].mes);

        int i = 0;
        while (tareas[totalTareas].situacion[i] = "pendiente"[i]) {
            i++;
        }

        totalTareas++;
    }
}
//Miryam
void listarTareasPendientes() {
    printf("Lista de tareas pendientes:\n");
    int hayPendientes = 0;// hayPendiente para comprobar si hay tareasspendientes
    //recorre todas las tareas que registramos en el arreglo tareas
    for (int i=0; i<totalTareas; i++) 
	{
        int esPendiente=1;
        for (int j=0; tareas[i].situacion[j] != '\0' || "pendiente"[j] != '\0'; j++) {
            if (tareas[i].situacion[j] != "pendiente"[j]) {
                esPendiente = 0;
                break;
            }
        }

        if (esPendiente) {
            printf("Titulo: %s\n", tareas[i].titulo);
            printf("Materia: %s\n",tareas[i].materia);
            printf("Fecha: %d/%d\n", tareas[i].dia, tareas[i].mes);
            printf("Estado: %s\n\n", tareas[i].situacion);
            hayPendientes = 1; // Hay al menos una tarea pendiente
        }
    }

    if (!hayPendientes) {
        printf("No hay tareas pendientes.\n");
    }
}

//Miryam
void imprime_salida() {
    printf("\n *-*-*-*-*-*-*-*-* \n");
    printf("Proyecto final\n");
    printf("CUCEI Progamacion Estructurada\n");
    printf("25 de noviembre de 2023\n");
}
