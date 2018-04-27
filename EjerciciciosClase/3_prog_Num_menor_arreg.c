/*             Autor: Irving Efren Garcia Ramos                        */
/*             Email: irvin.16@outlook.es                              */
/*             Fecha de Creación: 14/04/2018                           */
/*             Fecha de Actualizción: 15/04/2018                       */
/*   Descripción: Programa que muestre el número menor de un arreglo   */

/* Declaración de las bibliotecas*/
#include <stdio.h>
#include <conio.h>

#define TAM 100

/* Declaración de la función main */
int main(void)
{
     int n;
     int menor;
     int pos;
     int Arreglo[TAM];


     printf("\nIngrese la cantidad de numeros para su arreglo\n");
     scanf("%d", &pos);

     if (pos<100)
     {
         for (int i=0; i<pos; i++)
         {
             printf("\nIngrese el numero %d del arreglo", i);
             scanf("%d", &n);
             Arreglo[i]=n;
         }
         menor = Arreglo[0];
         for (int i=1; i<pos; i++)
         {
             if (menor > Arreglo[i])
             {
                 menor = Arreglo[i];
             }
         }
     printf("\nEl numero menor del arreglo es el: %d", menor);
     }
     else
     {
         printf("\nLo sentimos usted excede el limite de posiciones\n");
     }
     getch();
     return 0;
}
