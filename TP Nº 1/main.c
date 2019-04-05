#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(){



 float x,y,suma,resta,multiplicacion,division; // declaro variables  de tipo flotante
  int rta=1,factorialA,factorialB; // tipo enteras
     printf("calculadora TP1 (kawatkowski)-------");

   do{ // utilizo el do para asegurarme de q se ejecute al menos 1 vez


    printf("ingrese numero A \n"); // muestro mensaje pidiendo datos
    scanf("%f",&x);
    printf("ingrese numero B\n ");
    scanf("%f",&y);

        if (y==0){ // evaluo  si el diviso es cero no muestro divisi{on ya q no existe
       printf(" la division no es posible en este caso \n . ");
        suma=sum(x,y);
        resta=res(x,y);
        multiplicacion=mul(x,y);
        factorialA= factorial(x);
        factorialB=factorial(y) ;// llamo a las funciones previamente realizadas en funciones.c

 printf(" El resultado de A+ B: %.2f \n"
       " el resultado de A-B: %.2f \n"
       " el resultado de A*B: %.2f \n"
       "el factorial de A:%d \n el factorial de B:%d \n"
        ,suma,resta,multiplicacion,factorialA,factorialB);// muestro los resultados

        }else{ // en este caso si el divisor es mayor incluyo la division en los resultados.





        suma=sum(x,y);
        resta=res(x,y);
        multiplicacion=mul(x,y);
        division=dib(x,y);
        factorialA=factorial(x);
        factorialB=factorial(y);



printf(" el resultado de A+ B: %.2f \n"
       "el resultado de A-B: %.2f \n"
       "el resultado de A*B: %.2f \n"
       "el resultado de A/B: %.2f \n"
       "el factorial de A:%d \n el factorial de B:%d\n "
       ,suma,resta,multiplicacion,division,factorialA,factorialB);


            }




       printf("desea realizar  otra operacion (si : 1 no : 2)-");// muestro opciones a realizar
     scanf("%d",&rta); // tomo por teeclado respuesta
system("CLS");// borro pantalla para  terminar o seguir ingresando datos.

        }while(rta==1);

return 0;

}
