#include <stdio.h>
#include <string.h>

//Miryam
struct MaximoDeTareas {
    char nombre[50];
    char materia[33];
    char fecha[30];
} GestorTareas;

struct MaximoDeTareas; //miryam
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
char resp;
  do
  {
    printf("Ingrese el nombre de la tarea:\n");
    scanf("%s", GestorTareas.nombre);

    printf("Ingrese el nombre de la materia:\n");
    scanf(" %s", GestorTareas.materia);

    printf("Ingrese la fecha de entrega:\n");
    scanf(" %s", GestorTareas.fecha);

    printf("%c%cSu tarea se ha agregado con exito!!\n", 173, 173);

    printf("%cDesea seguir agregando tareas? Presione 'S' para si, o, de lo contrario 'N' para regresar el menu anterior:\n", 168);
    scanf(" %c", &resp);
    fflush(stdin);
  }while (resp=='S' || resp=='s'); //Jessica
}
//Miryam
void listarTareasPendientes() {
    printf("Lista de tareas pendientes:\n");

    int hayPendientes=0;

    for (int i=0; i< totalTareas; i++) {
        printf("Tarea %d:\n", i+1);
        printf("Nombre: %s\n", GestorTareas.nombre);
        printf("Materia: %s\n", GestorTareas.materia);
        printf("Fecha de entrega: %s\n\n", GestorTareas.fecha);
        hayPendientes=1;
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
