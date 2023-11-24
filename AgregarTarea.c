#include <stdio.h>
#include <string.h>
void AgregarTarea ();

char nombre[50];
char materia[33];
char fecha[30];


void AgregarTarea ()
{
char resp;
  do
  {
    printf("Ingrese el nombre de la tarea:\n");
    scanf(" %s", nombre);  //buscar
    printf("Ingrese el nombre de la materia:\n");
    scanf(" %s", materia);
    printf("Ingrese la fecha de entrega:\n");
    scanf(" %s", fecha);

    printf("%c%cSu tarea se ha agregado con exito!!\n", 173, 173);

    printf("%cDesea seguir agregando tareas? Presiona 'S' para si, de lo contrario 'N' para regresar el menu anterior:\n", 168);
    scanf("%c", &resp);
    fflush(stdin);
  }while (resp=='S' || resp=='s');
}

int main()
{
    AgregarTarea();
    return 0;
}
