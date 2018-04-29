/*      Autor: Irving Efren Garcia Ramos          */
/*      E-mail: irvin.16@outlook.es               */
/*      Fecha de Creación: 24/04/2018             */
/*      Fecha de Actualización:                   */
/*  Descripción:                                  */


// Declaración de las bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Definición de constantes
#define ROW 3   // Número de filas de la matriz
#define COL 3   // Número de columnas de la matriz

// Declaración de lab función principal
int main(void)
{
     int array[ROW][COL];
     float arreglo[ROW][COL];

     // Inicializar el array con valores aleatorios 1 - 100
     for (int i=0; ; i < ROW; i++)
     {
          for (int j=0; j<COL; J++)
          {
              // Asignación de datos al arreglo
              // Utilizar la fumción de Scanf() para solicitar datos al usuario

              // Utilizar la función rand() para solicitar datos al usuario
              // La función se encuentra definida dentro de la biblioteca stdlib.
              array[i][j]= rand() % (MAX +1);

              // Tarea: Generar valores aleatorios de tipo flotante entre 0 - 1000
              arreglo[i][j]= rand() %  (MAX +1);
     }
     printf("\xlb[32m Datos aleatororios de la matriz: array[%d][%d]\n", ROW, COL);
     printf("\xlb[31m Otro mensaje\n");

     printf("{\n");
     for (int i=0; ; i < ROW; i++)
     {
          printf("{\n");

          for (int j=0; j<COL; J++)
          {
              printf("%d", array[ï][j]);
          }
          printf("%s\n", );
     }
     printf("%s\n", );

     printf("{\n");
     for (int i=0; ; i < ROW; i++)
     {
          printf("{\n");

          for (int j=0; j<COL; J++)
          {
              printf("%f", arreglo[i][j]);
          }
          printf("%s\n", );
     }
     printf("%s\n", );

     return 0;
}
