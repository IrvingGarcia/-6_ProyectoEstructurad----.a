/*             Autor: Irving Efren Garcia Ramos              */
/*             Email: irvin.16@outlook.es                    */
/*             Fecha de Creación: 25/04/2018                 */
/*             Fecha de Actualizción: 26/04/2018             */
/*   Descripción: Programa que defina una estruct en c       */
// Declaración de las bibliotecas
#include <stdio.h>


#define TAM 15

// Colores del Texto
#define RESET "\x1b[0m" // Resetear el color
#define NEGRO "\x1b[30m" // Color negro
#define ROJO "\x1b[30m" // Color rojo
#define VERDE "\x1b[31m" // color verde
#define AMARILLO "\x1b[32m"
#define AZUL "\x1b[33m"
#define MORADO "\x1b[34m"
#define CYAN "\x1b[35m"

#define NEGRITA "\x1b[1m"

// Definición de tipos de constantes arreglos
#define

/*struct Alumno
{
   char matricula[10];
   char curp[18];
   char nivelestudio[30];
   char nombre[50];
   int edad;
   char sexo[1];
   char fechaNac[10];
   float peso;
   float estatura;
   char tipoSangre;
   char numtelefono[12]
   char dirección[50];
   char alergia[20];
   char deporte[15];
}*/


struct Alumno
{
   char matricula[10];
   char nombre[50];
   int edad;
   char sexo[1];
   float peso;
   float estatura;
}


// Cuerpo de la función main
int main(void)
{
  // Declaración de la estructura Alumno
  struct Alumno edson; // Declaración de la variable alumno

  // Asignación de datos a los miembros de la estructura alumno
  // Tipo de operador punto(.)
  // edson.matricula= "2017060236"
  strcpy (edson.matricula,"2017060236");
  strcpy (edson.mombre, "Santos Zarate Edson Osnart");
  edson.sexo='H';
  edson.edad=18;
  edson.estatura=1.60;
  edson.peso=60;


  // De referencia se utiliza la función strcpy() o strncpy() de la libreria string.h
  //strncpy()

  printf(ROJO"%s\n", edson.nombre);
  printf(AMARILLO"%s\n", edson.matricula);
  printf(MORADO"%c\n", edson.edad);
  printf(VERDE"%s\n", edson.estatura);
  printf(ROJO"%s\n", edson.sexo);
  printf(AZUL"%s\n", edson.peso);


  return 0;
}
