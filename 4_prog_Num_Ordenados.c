/*             Autor: Irving Efren Garcia Ramos                        */
/*             Email: irvin.16@outlook.es                              */
/*             Fecha de Creación: 14/04/2018                           */
/*             Fecha de Actualizción: 15/04/2018                       */
/*   Descripción: Programa que muestre el número menor de un arreglo   */

/* Declaración de las bibliotecas */
#include <stdio.h>
#include <conio.h>

#define TAM 100

int main(void)
{
     int pos;
     int n;
     int Arreglo[TAM];
     int temp;

     printf("\nIngrese la cantidad de números para su arreglo");
     scanf("%d", &pos);

     if (pos<100)
     {
         for (int i=0; i<pos; i++)
         {
             printf("\nIngrese el número %d del arreglo", i);
             scanf("%d", &n);
             Arreglo[i]=n;
         }
         for (int i=2; i<=pos; i++)
         {
             for (int j=0; j<=pos-i; j++)
             {
                 if (Arreglo[j] > Arreglo[j+1])
                 {
                     temp = Arreglo[j];
                     Arreglo[j] = Arreglo[j+1];
                     Arreglo[j+1] = temp;
                 }
             }
         }
         for (int i=0; i<pos; i++)
         {
             printf("%i  ", Arreglo[i]);
         }
     }
     else
     {
         printf("\nLo sentimos usted excede el limite de posiciones del arreglo");
     }
     getch();
     return 0;
}
