/*Escribir un programa que lea una lista de palabras y las ordene alfabéticamente.*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
using namespace std;
// esta funcion es para leer las palabras ingredas
void IngresarNombres(char datos[][50], int cantidad)
{
  for (int i = 0; i < cantidad; i++)
  {
    fflush(stdin);
    cout << "Palabra " << i + 1 << " = ";
    gets(datos[i]);//para leer la cadena
  }
}
// esta funcion es para comparar y imprimir las palabras ya ingresadas
void Imprimir_Nombres(char datos[][50], int cantidad)
{

  cout << "las palabras en orden son : " << endl;

  char temp[50];

  for (int i = 0; i < cantidad; i++)
  {
    for (int j = i; j < cantidad; j++)
    {
      // comparamos los arrelos de nombres
      if (strcmp(datos[i], datos[j]))//strcmp compara a las cadenas
      {
        strcpy(temp, datos[i]);//strcpy copia las cadena a la que apunta
        strcpy(datos[i], datos[j]);
        strcpy(datos[j], temp);
      }
    }
  }
  for (int i = 0; i < cantidad; i++)
  {
    cout << i + 1 << "  " << datos[i] << endl;
  }
}
int main()
{
  int Cant; // cantidad de nombres a ingresar

  cout << "Cuantas palabras desea ingresar " << endl;
  cin >> Cant;

  char Nombres[Cant][50];
  IngresarNombres(Nombres, Cant);
  Imprimir_Nombres(Nombres, Cant);

  return 0;
}