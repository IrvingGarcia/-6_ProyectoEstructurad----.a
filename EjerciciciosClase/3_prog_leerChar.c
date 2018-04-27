/*    Autor: Irving Efren Garcia Ramos     */
/*    E-mail: irvin.16@outlook.es          */
/*    Fecha de creación: 14/04/2018        */
/*    Fecha de actualización: 15/04/2018   */
/* Descripción: Programa para leer caracteres en minusculas  */

#include <stdio.h>

const int tamanio = 5; // Definir una constante

int main(void)
{
     char c;
     char array[tamanio];

     int index = 0;
     while ((c = getchar())!= '\n')  // Leer caracter a caracter
     {
       if (c >= 97  && c <= 122)
       {
          c = c - 32;
          array[index] = c;
          index++;
       }

     }

     printf("\n");
     for (int i = 0; i < tamanio; i++)
     {
         printf("\n%c", array[i]);
     }

     printf("\n");

     return 0;
}
