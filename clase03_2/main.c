#include <stdio.h>
#include <stdlib.h>
//recibe pero no devuelve
int main()
{int numeroUno, numeroDos, resultado;

printf("Ingrese un n�mero");
scanf("%d", &numeroUno);
printf("Ingrese otro n�mero");
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
