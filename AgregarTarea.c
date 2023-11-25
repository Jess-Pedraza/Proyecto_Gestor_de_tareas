#include <stdio.h>
#include <string.h>

void AgregarTarea ();

struct MaximoDeTareas {
char nombre[50];
char materia[33];
char fecha[30];
} GestorTareas;

void AgregarTarea ()
{
char resp;
  do
  {
    printf("Ingrese el nombre de la tarea:\n");
    scanf("%s", GestorTareas.nombre);

    printf("Ingrese el nombre de la materia:\n");
    scanf("%s", GestorTareas.materia);

    printf("Ingrese la fecha de entrega:\n");
    scanf(" %s", GestorTareas.fecha);

    printf("%c%cSu tarea se ha agregado con exito!!\n", 173, 173);

    printf("%cDesea seguir agregando tareas? Presione 'S' para si, o, de lo contrario 'N' para regresar el menu anterior:\n", 168);
    scanf("%c", &resp);
    fflush(stdin);
  }while (resp=='S' || resp=='s'); //Jessica
}

int main()
{
    struct MaximoDeTareas GestorTareas;
    AgregarTarea();
    return 0;
}
