#include <stdio.h>
#include <stdlib.h>

int main()
{ int suma;
suma= sumarNumeros();


    return 0;
}
void sumarNumeros(void)
//int sumarNumeroa (int, int);
{

 int numeroUno, numeroDos, resultado;

printf("Ingrese un número");
scanf("%d", &numeroUno);
printf("Ingrese otro número");
scanf("%d", &numeroDos);
resultado=numeroUno+numeroDos;

printf("El resultado es: %d", resultado);


}
