#include <stdio.h>
#include <string.h>

//Miryam
struct MaximoDeTareas {
    char nombre[50];
    char materia[33];
    char fecha[15];
    int estado;
} GestorTareas[100]; // Se añadió esto para suponer que hay un máximo de 100 tareas //ary

int totalTareas = 0;
void AgregarTarea();//Leslie
void MarcarCompletada(); //Ariadna
void listarTareasPendientes(); //Miryam
void ListarTareas(); //Ariadna
void  Busqueda(char titulo[], int indice); //Jessica
void imprime_salida(); //Miryam

int main() //Jessica
{
    int op;
    char titulo[50];
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
                MarcarCompletada();
                break;

            case 3:
                listarTareasPendientes();
                break;

            case 4:
                ListarTareas();
                break;

            case 5:
                    printf("Ingrese el titulo de la tarea que desea buscar:\n");
                    scanf(" %s", titulo);
                    Busqueda(titulo,0); //Empieza la busqueda desde la posicion 0 del array
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

void AgregarTarea(){}
void MarcarCompletada(){}
void listarTareasPendientes(){}
void ListarTareas(){}

void Busqueda(char titulo[], int indice) //Jessica
{
    if(indice<totalTareas){
        if(strcmp(GestorTareas[indice].nombre, titulo)==0) // comparar dos cadenas
        {
            printf("Tarea encontrada\n");
            printf("Nombre: %s\n", GestorTareas[indice].nombre);
            printf("Materia: %s\n", GestorTareas[indice].materia);
            printf("Fecha de entrega: %s\n", GestorTareas[indice].fecha);
        } else{
    Busqueda(titulo, indice + 1); //llamada recurisvidad con el siguiente indice
   }
} else{
        printf("No se encontro ninguna tarea con ese titulo\n");
    }
}

void imprime_salida(){}
