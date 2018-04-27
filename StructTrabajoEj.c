/*----------------------------------------------------------------*/
/* Autor: Pedro Gabriel Rolando																	  */
/* E-mail: rolando.pedro.gabriel@gmail.com                        */
/* Fecha creacion: 26/04/2018                                     */
/* Fecha actualizacion: 27/04/2018 27/04/2018                     */
/* Descripcion: Este programa esta elaborado en el lenguaje de    */
/*              programacion C, para fines academicos. En el cual */
/*              se incluyen:                                      */
/*                              - los tipos de de datos basico:   */
/*                                (int, char, float, void).       */
/*                              - arreglos                        */
/*                              - estructuras                     */
/*                              - constantes                      */
/*                              - enumeraciones                   */
/*                              - menu de opciones                */
/*              Tambien se incluyen funciones de la biblioteca    */
/*              string.h:                                         */
/*                        - strcpy()                              */
/*                        - strtok()                              */
/*                                                                */
/*              Asi mismo, se utiliza la funcion system(),        */
/*              propiamente de la biblioteca stdlib.h             */
/*----------------------------------------------------------------*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/* El codigo de colores fue tomado de la siguiente pagina:  */
/* www.forosdelweb.com/f96/printf-otros-colores-836106      */

#define _RESET        "\x1b[0m"     /* Resetear el color.   */
#define _ARESET       "\E[m"        /* Resetear todo.       */

#define _TNEGRO       "\x1b[30m"    /* Define el color del texto en negro.              */
#define _TROJO        "\x1b[31m"    /* Define el color del texto en rojo.               */
#define _TVERDE       "\x1b[32m"    /* Define el color del texto en verde.              */
#define _TAMARILLO    "\x1b[33m"    /* Define el color del texto en amarillo.           */
#define _TAZUL        "\x1b[34m"    /* Define el color del texto en azul.               */
#define _TMORADO      "\x1b[35m"    /* Define el color del texto en morado.             */
#define _TCYAN        "\x1b[36m"    /* Define el color del texto en cyan.               */
#define _TBLANCO      "\x1b[37m"    /* Define el color del texto en blanco.             */

#define _FNEGRO       "\x1b[40m"    /* Define el color del fondo del texto en negro.    */
#define _FROJO        "\x1b[41m"    /* Define el color del fondo del texto en rojo.     */
#define _FVERDE       "\x1b[42m"    /* Define el color del fondo del texto en verde.    */
#define _FAMARILLO    "\x1b[43m"    /* Define el color del fondo del texto en amarillo. */
#define _FAZUL        "\x1b[44m"    /* Define el color del fondo del texto en azul.     */
#define _FMORADO      "\x1b[45m"    /* Define el color del fondo del texto en morado.   */
#define _FCYAN        "\x1b[46m"    /* Define el color del fondo del texto en cyan.     */
#define _FBLANCO      "\x1b[47m"    /* Define el color del fondo del texto en blanco.   */

#define _NEGRITA      "\E[1m"       /* Negrita.        */
#define _NNEGRITA     "\E[22m"      /* No negrita.     */
#define _CURSIVA      "\E[3m"       /* Ccursiva.       */
#define _NCURSIVA     "\E[23m"      /* No cursiva.     */
#define _SUBRAYADO    "\E[4m"       /* Subrayado.      */
#define _NSUBRAYADO   "\E[24m"      /* No subrayado.   */
#define _PARPADEANTE  "\E[5m"       /* Parpadeante.    */
#define _NPARPADEANTE "\E[25m"      /* No parpadeante. */



#define TAM_NOM   50           /* Definicion del tamanio del arreglo unidimensional */
#define TAM_MAT   12           /* Tamanio de la matricula del alumno                */
#define TAM_FECHA 12           /* Tamanio de la fecha de nacimiento                 */

const int TOTAL_ALUMNO   = 10;  /* Tamanio total del alumno                          */
const int TOTAL_OPCIONES = 9;  /* Total de opciones                                 */



/* Declaracion de enumeraciones para el control de menu de opciones:                */
/* CREAR      = 1                                                                   */
/* LISTAR     = 2                                                                   */
/* LISTAR_ASC = 3                                                                   */
/* LISTAR_DES = 4                                                                   */
/* BUSCAR     = 5                                                                   */
/* ACTUALIZAR = 6                                                                   */
/* ELIMINAR   = 7                                                                   */
/* SALIR      = 8                                                                   */
enum OPCIONES_MENU{CREAR = 1,
									 LISTAR,
									 LISTAR_ASC,
                   LISTAR_DES,
                   BUSCAR,
                   ACTUALIZAR,
                   ELIMINAR,
                   SALIR};



/* Se define una estructura para modelar los datos de una alumno. */
/* Los miembros de la estructura son:                             */
/*                                    - nombre                    */
/*                                    - matricula                 */
/*                                    - fechaNacimiento           */
/*                                    - sexo                      */
/*                                    - estatura                  */
/*                                    - peso                      */
struct Alumno
{
	char nombre[TAM_NOM];
	char matricula[TAM_MAT];
	char fechaNacimiento[TAM_FECHA];
	char sexo;
	float estatura;
	float peso;
};



int main(void)
{
	struct Alumno alumno[TOTAL_ALUMNO];      /* Declaracion de una variable de arreglo de estructura> alumno[]      */
	int numAlumnos;                          /* Controla el numero de alumnos que desea el usuario.                 */
	int opcion;                              /* Controla las opciones del menu.                                     */
	char c;                                  /* Lee un caracter y valida el salto de linea para salir de la opcion. */



	do{
		system("clear");  /* Limpia toda la pantalla.           */
		puts("");         /* Haciendo salto de lina con puts(). */



		printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\nS I S T E M A     D E    C O N T R O L    D E    A L U M N O S" _ARESET);



		printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");

		printf(_TAMARILLO _NEGRITA "\n1. Alta de alumnos");
		printf(_TAMARILLO _NEGRITA "\n2. Lista de alumnos");
		printf(_TAMARILLO _NEGRITA "\n3. Lista de alunos Acendente");
		printf(_TAMARILLO _NEGRITA "\n4. Lista de alumnos Descendente");
    printf(_TAMARILLO _NEGRITA "\n5. Buscar Alumno");
		printf(_TAMARILLO _NEGRITA "\n6. Actualizar Alumno");
		printf(_TAMARILLO _NEGRITA "\n7. Eliminar Alumno");
		printf(_TAMARILLO _NEGRITA "\n8. Salir");



		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);



		switch(opcion)
		{



			case CREAR:
							printf(_TCYAN     _NEGRITA "\n\n1. A L T A     D E     A L U M N O S");
							printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de alumnos: " _TVERDE);
							scanf("%d",&numAlumnos);



							printf("\n\n" _ARESET);

							/* Ciclo for: permite solocitar los datos de los ingresados por el usuario */
							for(int i = 0; i < numAlumnos; i++)
							{
							  while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salgo de linea */



								printf(_TBLANCO _NEGRITA "Introduce el nombre del alumno: "              _NNEGRITA _TVERDE);
								fgets(alumno[i].nombre, TAM_NOM, stdin);                                    /* Solicita el nombre del alumno al usuario          */
								strcpy(alumno[i].nombre, strtok(alumno[i].nombre, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */



								printf(_TBLANCO _NEGRITA "Introduce la matricula del alumno: "           _NNEGRITA _TVERDE);
								fgets(alumno[i].matricula, TAM_MAT, stdin);                                 /* Solicita la matricula el alumno al usuario        */
								strcpy(alumno[i].matricula, strtok(alumno[i].matricula, "\n"));             /* Elimina el salto de linea '\n' que genera fgets() */



								printf(_TBLANCO _NEGRITA "Introduce la fecha de nacimiento del alumno: " _NNEGRITA _TVERDE);
								fgets(alumno[i].fechaNacimiento, TAM_FECHA, stdin);                         /* Solicita la fecha de nacimiento al usuario        */
								strcpy(alumno[i].fechaNacimiento, strtok(alumno[i].fechaNacimiento, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */



								printf(_TBLANCO _NEGRITA "Introduce el sexo del alumno: "                _NNEGRITA _TVERDE);
								scanf("%c", &alumno[i].sexo);



							  while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salgo de linea */



								printf(_TBLANCO _NEGRITA "Introduce la estatura del alumno: "            _NNEGRITA _TVERDE);
								scanf("%f", &alumno[i].estatura);



								printf(_TBLANCO _NEGRITA "Introduce el peso del alumno: "                _NNEGRITA _TVERDE);
								scanf("%f", &alumno[i].peso);
								printf("\n\n");
							}



							while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "Presiones Enter para salir: ");



							while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
							{}
							break;



			case LISTAR:
							printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    A L U M N O S\n\n");



							/* Ciclo for: permite imprimir los datos de los ingresados por el usuario */
							printf(_TROJO     _NEGRITA);
							printf("%-40.25s|%-12s|%-18s|\tSEXO\t|   ESTATURA    |      PESO     |", "NOMBRE", "MATRICULA", "FECHA NACIMIENTO");
              printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
							for(int i = 0; i < numAlumnos; i++)
							{
								printf(_TBLANCO _NEGRITA);
								printf("%-40.25s|%-12s|%-18s|\t%c\t|\t%2.2f\t|\t%2.2f\t|", alumno[i].nombre,
                                                                           alumno[i].matricula,
                                                                           alumno[i].fechaNacimiento,
                                                                           alumno[i].sexo,
                                                                           alumno[i].estatura,
                                                                           alumno[i].peso);
								printf("\n");
							}



							while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n\nPresiones Enter para salir: ");

							while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
							{}
							break;



			case LISTAR_ASC:
							while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    A S C E D E N T E");
							printf(_TROJO     _NEGRITA "\n\nEn construccion ...!");
							printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para regresar al menu principal: ");
							while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
							{}
							break;



			case LISTAR_DES:
							while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    D E S C E D E N T E");
							printf(_TROJO     _NEGRITA "\n\nEn construccion ...!");
							printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para regresar al menu principal: ");
							while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
							{}
							break;



			case BUSCAR:
							while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R");
							printf(_TROJO     _NEGRITA "\n\nEn construccion ...!");
							printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para regresar al menu principal: ");
							while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
							{}
							break;



			case ACTUALIZAR:
							while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R");
							printf(_TROJO     _NEGRITA "\n\nEn construccion ...!");
							printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para regresar al menu principal: ");
							while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
							{}
							break;



			case ELIMINAR:
							while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R");
							printf(_TROJO     _NEGRITA "\n\nEn construccion ...!");
							printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para regresar al menu principal: ");
							while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
							{}
							break;



			case SALIR:
							system("clear");              /* Antes de terminar la ejecucion del programa, limpia la pantalla */
							exit(0);                      /* Termina la ejecucion del programa                               */
		}
	}while(opcion < TOTAL_OPCIONES);

	return 0;
}
