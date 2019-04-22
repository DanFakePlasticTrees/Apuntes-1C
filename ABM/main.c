
#include <stdlib.h>
#include "Empleado.h"

#define T 10


int menuDeOpciones(char[]);
int modificarDatos(eEmpleado[], int);


int main()
{

    int indice;
    int opcion;

    eEmpleado lista[T];
    inicializarEmpleados(lista,T);


hardcodearDatosEmpleados(lista,6);
    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Mostrar sueldo mayor\n6.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
              hardcodearDatosEmpleados(lista,  T);

            break;
            case 3:
                modificarDatos(lista,T);
                break;
            case 4:
                mostrarListaEmpleados(lista, T);
                break;

            case 5:
                mostrarEmpleadoSueldoMaximo(lista,T);
               printf("La cantidad de Carlos es: %d\n", contarCarlos(lista,T));
                break;

        }
    }while(opcion!=6);



    //inicializarEmpleados(lista, T);




    return 0;
}

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}

int modificarDatos(eEmpleado lista[], int tam){
//pedir legajo
//busco legajo
//si existe: pedir nuevo dato (sb)
//recalculo sn




}





