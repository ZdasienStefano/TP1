/* ----------------------------------------------------------------------
                   TP1 - Programacion de funciones en C++

   Descripcion: Plantilla para el desarrollo del trabajo practico no. 1
   Alumno: Zdasien Stefano
   Curso: 6to 1ra (A)
   Ciclo lectivo: 2022
   ---------------------------------------------------------------------- */

#include <iostream>
#include <windows.h>
#include "TP1.h"
using namespace std;
using std::string;
/* La opcion para salir */
#define SALIR 'S'

/* ----------------------------------------------------------------------
   Prototipos
   ---------------------------------------------------------------------- */
void menu(void);                        /* Presenta el menu */
int leerOpcion(void);                   /* Lee la opcion del usuario */
float superficieCirculo(int);           /* Calcula la superficie del circulo */
long suma(int, int); 				/* Calcula la suma de numeros en un rango */
long potencia(int, int);			     /* Calcula la potencia de un numero */
long factorial(int);	               /* Calcula el factorial de un numero */
int edad(int, int, int);				/* Calcula la edad de una persona */
string romanos(int);				/* Convierte un numero en notacion romana */
bool esPrimo(int);			  		/* Determina si un numero es primo o no */
bool contrasena(string, string);        /* Determina si la contrasena ingresada es correcta*/
void tablaDel(int, int *);  			/* Calcula y devuelve la tabla de multplicacion de un numero */
void fibonacci(int, int *);		     /* Calcula y devuelve la sucesión de Fibonacci */
/* ---------------------------------------------------------------------- */

int leerOpcion(void)
{
     char opcion;

     opcion = getchar();
     while (opcion <= '0' || opcion > SALIR)
        opcion = getchar();

     return opcion;
}

void menu(void)
{
     system("CLS");
     cout << "Menu:" << endl;
     cout << "  1. Calcula la superficie de un circulo." << endl;
     cout << "  2. Suma numeros consecutivos entre dos valores enteros." << endl;
     cout << "  3. Calcula la potencia de un numero (x^y)." << endl;
     cout << "  4. Calcula el factorial de un numero." << endl;
     cout << "  5. Calcula la edad de una persona." << endl;
     cout << "  6. Convierte un numero a notacion romana." << endl;
     cout << "  7. Determina si un numero es primo." << endl;
     cout << "  8. Determina si la contrasena ingresada es valida." << endl;
     cout << "  9. Calcula la tabla de multplicacion de un numero." << endl;
     cout << "  0. Calcula y muestra la sucesión de Fibonacci." << endl;
     cout << "  S. Salir." << endl;
     cout << "  " << endl;
     cout << "  Ingrese la opcion: ";
}






int main()
{
    int radio, numero, desde, hasta, base, exponente, anio, mes, dia, tabla[10], sucesion[100];
    string unaContrasena;
    char opcion = 'x';

    while (opcion != SALIR)
    {
     menu();
     opcion = leerOpcion();
     switch (opcion)
          {
          case '1':
    		     system("CLS");
    			cout << "Ej. 1 - Calcula la superficie del circulo." << endl;
    			cout << "Ingrese el radio del circulo: ";
		     cin >> radio;
    			cout << "La superficie es: " << superficieCirculo(radio) << endl;
               return 0;
               break;


          case '2':
               system("CLS");
               cout << "Ej. 2 - Calcula la suma de numeros dentro desde un rango." << endl;
               cout << "Ingrese el numero desde: ";
               cin >> desde;
               cout << "Ingrese el numero hasta: ";
               cin >> hasta;
               cout << "La suma entre " << desde << " y " << hasta << " es: " << suma(desde, hasta);
               return 0;
               break;

          case '3':
               system("CLS");
               cout << "Ej. 3 - Calcula la potencia de un numero (x^y)." << endl;
               cout << "Ingrese la base (x): ";
               cin >> base;
               cout << "Ingrese el exponente (y): ";
               cin >> exponente;
               cout << "La potencia x^y es: " << potencia(base, exponente);
               return 0;
               break;

          case '4':
               system("CLS");
               cout << "Ej. 4 - Calcula el factorial de un numero." << endl;
               cout << "Ingrese un numero: ";
               cin >> numero;
               cout << "El factorial de " << numero << " es " << factorial(numero);
               return 0;
               break;

          case '5':
            	system("CLS");
            	cout << "Ej. 5 - Calcula la edad de una persona." << endl;
            	cout << "Ingrese anio de nacimiento: ";
            	cin >> anio;
            	cout << "Ingrese mes de nacimiento: ";
            	cin >> mes;
			cout << "Ingrese dia de nacimiento: ";
            	cin >> dia;
            	cout << "La edad es: " << edad(dia, mes, anio);
            	return 0;
            	break;

          case '6':
            	system("CLS");
            	cout << "Ej. 6 - Convierte un numero a notacion romana." << endl;
            	cout << "Ingrese numero a convertir: ";
            	cin >> numero;
            	cout << "La notacion romana de " << numero << " es: " << romanos(numero);
                return 0;
            	break;

          case '7':
               system("CLS");
               cout << "Ej. 7 - Determina si un numero es primo o no." << endl;
               cout << "Ingrese un numero: ";
               cin >> numero;
               if (esPrimo(numero))
                    cout << "El numero es primo." << endl;
               else
                    cout << "El numero no es primo." << endl;
               return 0;
               break;

          case '8':
               system("CLS");
               cout << "Ej. 8 - Determina si la contrasena ingresada es correcta." << endl;
               cout << "Ingrese contrasena: ";
               cin >> unaContrasena;
               if (contrasena(unaContrasena, "Maruchan"))
                    cout << "Contrasena correcta";
               else
                    cout << "Contrasena incorrecta";
               return 0;
               break;

          case '9':
               system("CLS");
               cout << "Ej. 9 - Calcula la tabla de multplicacion de un numero." << endl;
               cout << "Ingrese un numero: ";
               cin >> numero;
               cout << "la " << numero << "es" <<tabla[10];
               // agregar la logica para mostrar el contenido
               return 0;
               break;

          case '0':
               system("CLS");
               cout << "Ej. 10 - Calcula y muestra la sucesion de Fibonacci." << endl;
               cout << "Ingrese un numero: ";
               cin >> numero;
               fibonacci(numero, sucesion);
               // agregar la logica para mostrar el contenido
               return 0;
               break;

          }
     }

     return 0;





}





