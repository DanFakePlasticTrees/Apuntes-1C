#include <stdio.h>
#include <stdlib.h>

 int pedirNota(void);
  int sacarPromedio(int suma, int cantidad);
 int aprobarMateria (int notaMinima, int nota);
 void ejercicioUno(void)

int main()
{ /*int solicitud, solicitudDos;
float promedio;
int valorUno;
int valorDos;
int x=15;
int y=2;
/solicitud=pedirNota();
printf("%d", solicitud);
promedio=sacarPromedio(x,y);
printf("%.2f", promedio);

valorUno = aprobarMateria(6,2);
*/

void ejercicioUno();
 printf("%d", ejercicioUno())
}

 int pedirNota(void){
 int nota;

 do{
 printf("Ingrese una nota: ");
 scanf("%d", &nota);
 }
 while(nota<0||nota>10);


 return nota;

 }

 int sacarPromedio(int suma, int cantidad){
 float promedio;
 promedio=(float)suma/cantidad;
 return promedio;
 }

 int aprobarMateria (int notaMinima, int nota){
 if(nota>=notaMinima)
    return 1;
    return 0;

 }

 void ejercicioUno(void){
     int contadorAprobados=0;

 for(int=0, int<5, i++){
   int nota=pedirNota();
 }


 if(aprobarMateria()==return 1){
    contadorAprobados++;
    int prom=sacarPromedio();
 } else {int prom= sacarPromedio();}



 }
