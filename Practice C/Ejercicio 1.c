#include <stdio.h>

struct 
{ 
char nombre[30]; 
int legajo; 
int anoIngreso; 
} empleado;

int main()
{
    scanf("%s",&empleado.nombre);
    scanf("%d",&empleado.legajo);
    scanf("%d",&empleado.anoIngreso);

    
    printf("El nombre del empleado es: %s\n",empleado.nombre);
    printf("El numero de legajo es: %d\n",empleado.legajo);
    printf("El año de ingreso es: %d",empleado.anoIngreso);
    return 0;
}