#include <stdio.h>
#include <stdlib.h>

/** \brief se insertan 2 variables y devuelve la suma de los mismas
 * \param "x"  la primer variable a sumar
 * \param "y"  la segunda variable a sumar
 * \return devuelve  La suma de las 2 variables
 */


float sum(float x ,float y){

float sum;
  sum=x+y;
return sum ; }


/** \brief se isertan 2 variables y devuelve la resta de las mismas
 * \param "x"  el primer variable
 * \param "y"  el segunda  variable que resta a la primera
 * \return devuelve  La resta
 */

float res(float x,float y ){

     float res;
    res=x-y;
    return res;
}

/** \brief se isertan 2 variables y devuelve la multiplicacion de los mismas
 * \param "x"  la primer  variable a multiplicar
 * \param "y"  la segunda variable a multiplicar
 * \return  devuelve la multiplicación  de las 2 variables
 */

float mul(float x,float y){

    float mul ;
    mul=x*y;
    return mul;


}
/** \brief se isertan 2 variables y devuelve la división de los mismas
 * \param "x"  la primer  variable
 * \param "y"  la segunda variable q divide a la primera
 * \return  devuelve la division de la misma .
 */

   float dib (float x,float y){
    float total;
    total= x/y;
    return total;

}



/** \brief ingresa 1 variable se evalua si es var<=1 en el caso de q sea arroja una variable tipo entera ( se castea) si es var >=0 no arroja  ningun dato  null
 * \param "x"  la primer  variable a evaluar
 *
 * \return  devuelve el factorial  o  dato nulo .
 */
 int factorial(float x)
{
int total=1,i;

(int)x;

if( x<=0){
    printf("no existe el factorial de 0 \n o negativos");
    total=NULL;
}

for (i=x;i>0;i--){
    total = total*i;
    }

    return total;


}




