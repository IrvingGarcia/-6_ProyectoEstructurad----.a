/*    Autor: Irving Efren Garcia Ramos     */
/*    E-mail: irvin.16@outlook.es          */
/*    Fecha de creación: 17/04/2018        */
/*    Fecha de actualización: 18/04/2018   */
/* Descripción: Programa para declaración de arreglos*/

#include <stdio.h>

#define TAM 5

int main(void)
{
     const int array[TAM];
     int array1[TAM]={1,2,3,4,5};
     int array2[TAM]={1,2.[0]=10,3,4,[1]=0};
     int array3[TAM]={1,2,3,4,6};

     // Arreglo de caracteres
     char char1[]={'a','b','c'};
     char char2[]={62,63,64,65,66};
     char char3[]={0x63,0x64,0x65,0x66};

     printf("%c\n",char3[0]);

     return 0;
}
