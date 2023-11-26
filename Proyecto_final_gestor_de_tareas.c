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

void AgregarTarea() //leslie
{
    char resp;
    do {
        printf("Ingrese el nombre de la tarea:\n");
        scanf("%s", GestorTareas[totalTareas].nombre); //En cada punto se añadió el [totalTareas] para que incremente el indice, donde se guardan //ary
fflush(stdin); //vaciar (limpiar) el buffer del teclado. //Jessica
        printf("Ingrese el nombre de la materia:\n");
        scanf(" %s", GestorTareas[totalTareas].materia);
fflush(stdin);
        printf("Ingrese la fecha de entrega de la siguente manera DD-MM-AAAA:\n");
        scanf(" %s", GestorTareas[totalTareas].fecha);
fflush(stdin);
        GestorTareas[totalTareas].estado = 0; // Esto se añadió para que al agregar una tarea se marque como pendiente en automático
        totalTareas++; // Esto aumenta el contador de tareas //ary

        printf("%c%cSu tarea se ha agregado con exito!!\n", 173, 173);

        printf("%cDesea seguir agregando tareas? Presione 'S' para si, o, de lo contrario 'N' para regresar al menu anterior:\n", 168);
        scanf(" %c", &resp);

    } while (resp == 'S' || resp == 's');
}

void MarcarCompletada() //Ariadna
 {
    if (totalTareas > 0) {
        int numTarea;

        printf("Lista de tareas agregadas:\n");
        for (int i = 0; i < totalTareas; i++) {
            printf("%d. %s\n", i + 1, GestorTareas[i].nombre);
        }

        printf("Ingrese el numero de la tarea que desea marcar como completada: ");
        scanf("%d", &numTarea);

        if (numTarea >= 1 && numTarea <= totalTareas) {
            // Marcar la tarea como completada
            GestorTareas[numTarea - 1].estado = 1;
            printf("Tarea marcada como completada.\n");
        } else {
            printf("Número de tarea no válido.\n");
        }
    } else {
        printf("No hay tareas para marcar como completadas.\n");
    }
}

void listarTareasPendientes() //Miryam
{
    printf("Lista de tareas pendientes:\n");

    int hayPendientes = 0;

    for (int i = 0; i < totalTareas; i++) {
        if (GestorTareas[i].estado == 0) { // Se añadio esto para que se evalúe cuales tareas estan pendientes //ary
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


void imprime_salida() //Miryam
{
    printf("\n *-*-*-*-*-*-*-*-* \n");
    printf("Proyecto final\n");
    printf("CUCEI Progamacion Estructurada\n");
    printf("25 de noviembre de 2023\n");
}


