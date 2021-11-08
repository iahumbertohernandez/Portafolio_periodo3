/*        Archivo paldromo.c        */

typedef char TipoDato;

#include "pilarray.h"
#include <ctype.h>

int main()
{
  char palabra[100], ch;
  Pila P;
  int j, palmo;
  CrearPila(&P);
     /* Lee la palabra */
  do {
    puts("\n Palabra a comprobar si es palindromo");
    for (j = 0; (ch = getchar())!='\n'; )
    {
      palabra[j++] = ch;
      Insertar(&P,ch);     /* pone en la pila */
    }
    palabra[j] = '\0';

		/* comprueba si es palíndromo */
    palmo = 1;
    for (j = 0; palmo && !PilaVacia(P); )
    {
      palmo = palabra[j++] == Quitar(&P);
    }
    LimpiarPila(&P); 
    if (palmo)
      printf("\n La palabra %s es un palindromo \n",palabra);
    else
      printf("\n La palabra %s no es un palindromo \n",palabra);

    printf("\n  Otra palabra : "); scanf("%c%*c",&ch);
  }while (tolower(ch) == 's');

  return 0;
}

