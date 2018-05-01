#include <stdio.h>
#include <conio.h>

int longitudCadena (char *s) {
    int n;
    for (n=0; *s != '\0'; s++) n++;
    return n;
}
// Esta función calcula la longitud de una cadena.

int cadenaVacia (char *s) {
    int n = 0;
    if (longitudCadena(s) == 0) n = 1;
    return n;
}
// Esta función devuelve 1 si la cadena es vacía, y 0 en caso contrario.

char *concatenarCadenas (char *primerCadena, const char *segundaCadena) {
    const char *aux1;
    char *aux2;

    for ( aux2 = primerCadena; *aux2 != '\0'; aux2++);
    for ( aux1 = segundaCadena; *aux1 != '\0'; aux1++, aux2++) *aux2 = *aux1;
    *aux2 = '\0';
    return primerCadena;
}
// Esta función devuelve la concatenación de dos cadenas.

char cadena1[50];
char cadena2[50];
char cadena3[10];

int main(){
       printf("Ingrese la primera cadena:\n");
       scanf("%s", cadena1);
       printf("Ingrese la segunda cadena:\n");
       scanf("%s", cadena2);
       printf("Se considera una tercera cadena vacia para mostrar que el codigo funciona\n\n");

       printf("Numero de caracteres de primera cadena: ");
       printf("%u\n", longitudCadena(cadena1));
       printf("Numero de caracteres de segunda cadena: ");
       printf("%u\n", longitudCadena(cadena2));
       printf("\n");

       printf("La primera cadena es vacia? ");
       if (cadenaVacia(cadena1) == 1) printf("si\n");
       else printf("no\n");
       printf("La segunda cadena es vacia? ");
       if (cadenaVacia(cadena2) == 1) printf("si\n");
       else printf("no\n");
       printf("La tercera cadena es vacia? ");
       if (cadenaVacia(cadena3) == 1) printf("si\n");
       else printf("no\n");
       printf("\n");

       printf("Primer y segunda cadena, concatenadas: ");
       printf(concatenarCadenas(cadena1, cadena2));
       printf("\n");

       getch();

       return 0;
}
