#include <stdio.h>
#include <stdlib.h>
//no recibe pero devuelve
int main()
{ int resultado;

resultado=sumarNumeros();
printf("El resultado es: %d", resultado);

    return 0;
}
int sumarNumeros(void)
//int sumarNumeroa (int, int);
{ int numeroUno, numeroDos, resultado;

    printf("Ingrese un número");
scanf("%d", &numeroUno);
printf("Ingrese otro número");
scanf("%d", &numeroDos);
resultado= numeroUno + numeroDos;
}
