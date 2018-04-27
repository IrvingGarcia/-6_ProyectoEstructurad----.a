/*    Autor: Irving Efren Garcia Ramos     */
/*    E-mail: irvin.16@outlook.es          */
/*    Fecha de creación: 14/04/2018        */
/*    Fecha de actualización: 15/04/2018   */
/* Descripción: Programa que muestre la declaración de constantes con #define
   y const y que muestre en pantalla los valores de las constantes.  Así mismo,
   definir 6 macros para simular las operaciones (suma, resta, multiplicación,
   división y potencia) he imprimir los valores en pantalla. También se
   simularan los ciclos for, while y do-while.    */

#include <stdio.h>
#include <conio.h>

// Declaración de la constante con #define
#define PI 3.1416
#define G 9.81
#define E 2.718

// Declaración de la constante con const
const float pi = 3.1416;
const float g = 9.81;
const float e = 2.718;

// Implementación de macros
#define SUMA(x, y) x+y
#define RESTA(x, y) x-y
#define MULT(x, y) x*y
#define DIV(x, y) x/y
#define POTCUBO(x) x*x*x

// Definir ciclos con macros
#define CICLOFOR(x, y) for (x=0; x<y; x++)
#define CICLOWHILE(opcion) while (opcion=='s')
#define CICLODOWHILE(opcion) do{}while(opcion=='s');

int main(void)
{
     // Imprimir constantes const
     printf("\nEl valor de pi es de: %.4f", pi);
     printf("\nEl valor de g es de: %.2f", g);
     printf("\nEl valor de e es de: %.3f\n", e);

     // Imprimir constantes #define
     printf ("\nEl valor de PI es de: %.4f", PI);
     printf("\nEl valor de G es de: %.2f", G);
     printf("\nEl valor de e es de:%.3f\n", E);

     // Imprimir los macros
     printf("\nEl resultado de la suma es: %d", SUMA(3,17));
     printf("\nEl resultado de la resta es: %d", RESTA(37,9));
     printf("\nEl resultado de la multiplicacion es: %d", MULT(23,7));
     printf("\nEl resultado de la division es: %d", DIV(23,5));
     printf("\nEl resultado de la potenciacion es: %d", POTCUBO(89));

     // Utilizando los macros para ciclos
      int y;
      int x;
      printf("\nIngrese las veces que quiere imprimir el mensaje");
      scanf("%d", &y);
      CICLOFOR(x,y)
      {
           printf("\nHola Mundo...");
      }
      char opcion;
      CICLOWHILE(opcion)
      {
           printf("\nIngrese 's' si quiere seguir imprimiendo");
           scanf("%c", &opcion);
           printf("\nHola Mundo...");
      }
      CICLODOWHILE(opcion)
      {
           printf("\nIngrese 's' si quiere seguir imprimiendo");
           scanf("%c", &opcion);
           printf("\nHola Mundo...");
      }
     getch();
     return 0;
}
