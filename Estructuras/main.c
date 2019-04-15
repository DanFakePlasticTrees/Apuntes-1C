#include <stdio.h>
#include <stdlib.h>
#define T 2
#define LIBRE 0
#define OCUPADO 1
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
    int estado;
} eEmpleado;

void inicializarEmpleado();
void pedirEmpleado (eEmpleado lista [], int);
void mostarEmpleado(eEmpleado lista[], int);
void mostarUnEmpleado(eEmpleado unEmpleado);
void menu ();
int buscarLibre (eEmpleado [], int);

int main()
{


menu();



    return 0;
}


void pedirEmpleado(eEmpleado lista[], int tamaño){
int i;
    for (i=0; i<tamaño; i++){
    printf("Ingrese legajo: ");
    scanf("%d", &lista[i].legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(lista[i].nombre);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &lista[i].sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", &lista[i].sueldoBruto);
    lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;

    }


}

void mostarEmpleado(eEmpleado lista[], int tamaño){
 int i;
    for (i=0; i<T; i++){
    mostarUnEmpleado(lista[i]);
    }
}

void mostarUnEmpleado(eEmpleado unEmpleado){


 printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

}

void inicializarEmpleado(){
int i;
for(i=0; i<T; i++){
eEmpleado lista[i].estado =0;

}
}


int buscarLibre(eEmpleado lista[], int tamaño){
int i;
int indice;
for (i=0; i<tamaño; i++){
  if (estado==0){
    i

  }

}


}



void menu(){
int menu;
 eEmpleado lista[T];

printf("1.Cargar números.\n2.Mostrar números.\n");
printf("Elija una opción: ");
scanf("%d", &menu);

switch(menu){
case 1:
pedirEmpleado(lista, T);
break;
case 2:
mostarEmpleado(lista, T);
break;
}



}
