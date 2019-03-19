#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* se ingresan números enteros (distintos de cero) hasta que el usuario quiera. informar:a) cantidad de números ingresados,
  b)cantidad de pares, c) suma de positivos, d) promedio negativo, e) max y minimo, f) el positivo mas chico, g) el negativo
  mas grande, h) cantidad de números que se encuentran entre -10 y 50, i) promedio total
  */
 char respuesta = 's';
 int numero;
 do {
printf("Ingrese un número distinto de cero: ");
 scanf("%d", &numero);

 while (numero==0){
    printf("El número debe ser distinto de cero. reingrese: ");
    scanf("%d", &numero);
 }

 printf("¿Desea agregar más números?");
 fflush(stdin);
 scanf(" %c", &respuesta);




 } while(respuesta=='s');



    return 0;
}
