#include <stdio.h>
#include <string.h>
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
void  Busqueda(char titulo[], int indice){}
void imprime_salida(){}
