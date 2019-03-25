#include <stdio.h>
#include <stdlib.h>
//recibe pero no devuelve
int main()
{int numeroUno, numeroDos, resultado;

printf("Ingrese un número");
scanf("%d", &numeroUno);
printf("Ingrese otro número");
scanf("%d", &numeroDos);
resultado=sumarNumeros(numeroUno,numeroDos);

    return 0;
}
void sumarNumeros(int unNumero, int otroNumero)
//int sumarNumeroa (int, int);
{ int resultado;
resultado= unNumero + otroNumero;
printf("El resultado es: %d", resultado);
}
