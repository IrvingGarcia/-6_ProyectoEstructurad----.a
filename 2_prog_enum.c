/*    Autor: Irving Efren Garcia Ramos     */
/*    E-mail: irvin.16@outlook.es          */
/*    Fecha de creación: 18/04/2018        */
/*    Fecha de actualización: 20/04/2018   */
/* Descripcion: Programa para usar enum */



#include <stdio.h>

// Declaración de enum
// Tipo de identificador(lista de identificadores);

enum DIAS{L, M, MI, J, V, S, D};
enum MESES{EN=1, FE, MAR, AB, MAY, JUN, JUL, AG, SE, OC, NO, DI};
enum FRUTAS{manzana, pera, mango, durazno, uva, kiwi};
enum PRECIOAUTO{NUEVO=10, SEMINUEVO=5, USADO, INSERVIBLE};
enum {PROG, MATEDIS, MATII, TGS, ELECT} var1,var2,var3;



int main(void)
{
     printf("%d\n", USADO);

     for (enum MESES index=EN; index<=DI; index ++)
     {
         printf("%d\n", index);

         switch(index)
         {
             case EN:
                  printf("\nEnero\n");
             break;

             case FE:
                  printf("\nFebrero\n");
             break;

             case MAR:
                  printf("\nMarzo\n");
             break;

             case AB:
                  printf("\nAbril\n");
             break;

             case MAY:
                  printf("\nMayo\n");
             break;

             case JUN:
                  printf("\nJunio\n");
             break;

             case JUL:
                  printf("\nJulio\n");
             break;

             case AG:
                  printf("\nAgosto\n");
             break;

             case SE:
                  printf("\nSeptiembre\n");

             case OC:
                  printf("\nOctubre\n");
             break;

             case NO:
                  printf("\nNoviembre\n");
             break;

             case DI:
                  printf("\nDiciembre\n");
          }
      }

   printf("\n");
   printf("%d\n", var1);
   printf("%d\n", var2);
   printf("%d\n", var3);

   return 0;
}
