#include <stdio.h>
#include <stdlib.h>
//Prototipo (o firma o signatura)
//tipo_de_dato identificador([parametros]);


int main()
{ int numeroUno, numeroDos, resultado;

printf("Ingrese un n�mero");
scanf("%d", &numeroUno);
printf("Ingrese otro n�mero");
scanf("%d", &numeroDos);

resultado=sumarNumeros(numeroUno, numeroDos);
printf("El resultado es: %d", resultado);
    return 0;
}
int sumarNumeros(int unNumero, int otroNumero)
//int sumarNumeroa (int, int);
{ int resultado;
resultado= unNumero + otroNumero;
return resultado;
}
