#include "conio.h"
#include "stdio.h"

int estadoFinal (char *cadena){
  int matriz [16] [8] = {
    matriz [0] [0] = 1,
    matriz [0] [1] = 5,
    matriz [0] [2] = 5,
    matriz [0] [3] = 15,
    matriz [0] [4] = 15,
    matriz [0] [5] = 15,
    matriz [0] [6] = 15,
    matriz [0] [7] = 15,
    matriz [1] [0] = 2,
    matriz [1] [1] = 2,
    matriz [1] [2] = 15,
    matriz [1] [3] = 15,
    matriz [1] [4] = 3,
    matriz [1] [5] = 6,
    matriz [1] [6] = 7,
    matriz [1] [7] = 15,
    matriz [2] [0] = 2,
    matriz [2] [1] = 2,
    matriz [2] [2] = 15,
    matriz [2] [3] = 15,
    matriz [2] [4] = 15,
    matriz [2] [5] = 6,
    matriz [2] [6] = 7,
    matriz [2] [7] = 15,
    matriz [3] [0] = 4,
    matriz [3] [1] = 4,
    matriz [3] [2] = 4,
    matriz [3] [3] = 4,
    matriz [3] [4] = 15,
    matriz [3] [5] = 15,
    matriz [3] [6] = 15,
    matriz [3] [7] = 15,
    matriz [4] [0] = 4,
    matriz [4] [1] = 4,
    matriz [4] [2] = 4,
    matriz [4] [3] = 4,
    matriz [4] [4] = 15,
    matriz [4] [5] = 9,
    matriz [4] [6] = 10,
    matriz [4] [7] = 15,
    matriz [5] [0] = 5,
    matriz [5] [1] = 5,
    matriz [5] [2] = 5,
    matriz [5] [3] = 15,
    matriz [5] [4] = 15,
    matriz [5] [5] = 12,
    matriz [5] [6] = 13,
    matriz [5] [7] = 15,
    matriz [6] [0] = 15,
    matriz [6] [1] = 15,
    matriz [6] [2] = 15,
    matriz [6] [3] = 15,
    matriz [6] [4] = 15,
    matriz [6] [5] = 15,
    matriz [6] [6] = 8,
    matriz [6] [7] = 15,
    matriz [7] [0] = 15,
    matriz [7] [1] = 15,
    matriz [7] [2] = 15,
    matriz [7] [3] = 15,
    matriz [7] [4] = 15,
    matriz [7] [5] = 8,
    matriz [7] [6] = 15,
    matriz [7] [7] = 15,
    matriz [8] [0] = 15,
    matriz [8] [1] = 15,
    matriz [8] [2] = 15,
    matriz [8] [3] = 15,
    matriz [8] [4] = 15,
    matriz [8] [5] = 15,
    matriz [8] [6] = 15,
    matriz [8] [7] = 15,
    matriz [9] [0] = 15,
    matriz [9] [1] = 15,
    matriz [9] [2] = 15,
    matriz [9] [3] = 15,
    matriz [9] [4] = 15,
    matriz [9] [5] = 15,
    matriz [9] [6] = 11,
    matriz [9] [7] = 15,
    matriz [10] [0] = 15,
    matriz [10] [1] = 15,
    matriz [10] [2] = 15,
    matriz [10] [3] = 15,
    matriz [10] [4] = 15,
    matriz [10] [5] = 11,
    matriz [10] [6] = 15,
    matriz [10] [7] = 15,
    matriz [11] [0] = 15,
    matriz [11] [1] = 15,
    matriz [11] [2] = 15,
    matriz [11] [3] = 15,
    matriz [11] [4] = 15,
    matriz [11] [5] = 15,
    matriz [11] [6] = 15,
    matriz [11] [7] = 15,
    matriz [12] [0] = 15,
    matriz [12] [1] = 15,
    matriz [12] [2] = 15,
    matriz [12] [3] = 15,
    matriz [12] [4] = 15,
    matriz [12] [5] = 15,
    matriz [12] [6] = 14,
    matriz [12] [7] = 15,
    matriz [13] [0] = 15,
    matriz [13] [1] = 15,
    matriz [13] [2] = 15,
    matriz [13] [3] = 15,
    matriz [13] [4] = 15,
    matriz [13] [5] = 14,
    matriz [13] [6] = 15,
    matriz [13] [7] = 15,
    matriz [14] [0] = 15,
    matriz [14] [1] = 15,
    matriz [14] [2] = 15,
    matriz [14] [3] = 15,
    matriz [14] [4] = 15,
    matriz [14] [5] = 15,
    matriz [14] [6] = 15,
    matriz [14] [7] = 15,
    matriz [15] [0] = 15,
    matriz [15] [1] = 15,
    matriz [15] [2] = 15,
    matriz [15] [3] = 15,
    matriz [15] [4] = 15,
    matriz [15] [5] = 15,
    matriz [15] [6] = 15,
    matriz [15] [7] = 15};
  int estadoNumero;

  for (estadoNumero = 0; *cadena != '\0'; cadena++) {switch (*cadena) {
      case '0': estadoNumero = matriz [estadoNumero] [0];
      case '1': estadoNumero = matriz [estadoNumero] [1];
      case '2': estadoNumero = matriz [estadoNumero] [1];
      case '3': estadoNumero = matriz [estadoNumero] [1];
      case '5': estadoNumero = matriz [estadoNumero] [1];
      case '6': estadoNumero = matriz [estadoNumero] [1];
      case '7': estadoNumero = matriz [estadoNumero] [1];
      case '8': estadoNumero = matriz [estadoNumero] [2];
      case '9': estadoNumero = matriz [estadoNumero] [2];
      case 'a': estadoNumero = matriz [estadoNumero] [3];
      case 'b': estadoNumero = matriz [estadoNumero] [3];
      case 'c': estadoNumero = matriz [estadoNumero] [3];
      case 'd': estadoNumero = matriz [estadoNumero] [3];
      case 'e': estadoNumero = matriz [estadoNumero] [3];
      case 'f': estadoNumero = matriz [estadoNumero] [3];
      case 'A': estadoNumero = matriz [estadoNumero] [3];
      case 'B': estadoNumero = matriz [estadoNumero] [3];
      case 'C': estadoNumero = matriz [estadoNumero] [3];
      case 'D': estadoNumero = matriz [estadoNumero] [3];
      case 'E': estadoNumero = matriz [estadoNumero] [3];
      case 'F': estadoNumero = matriz [estadoNumero] [3];
      case 'x': estadoNumero = matriz [estadoNumero] [4];
      case 'X': estadoNumero = matriz [estadoNumero] [4];
      case 'u': estadoNumero = matriz [estadoNumero] [5];
      case 'U': estadoNumero = matriz [estadoNumero] [5];
      case 'l': estadoNumero = matriz [estadoNumero] [6];
      case 'L': estadoNumero = matriz [estadoNumero] [6];
    }
  }
  return estadoNumero;
}
/*
char *tipoDeEntero (char *cadena){
  char salida[50];
  switch (estadoFinal (cadena)) {
    case 1 : salida = "Octal";
    case 2 : salida = "Octal";
    case 4 : salida = "Hexadecimal";
    case 5 : salida = "Decimal";
    case 6 : salida = "Unsigned Octal";
    case 7 : salida = "Long Octal";
    case 8 : salida = "Unsigned Long Octal";
    case 9 : salida = "Unsigned Hexadecimal";
    case 10 : salida = "Long Hexadecimal";
    case 11 : salida = "Unsigned Long Hexadecimal";
    case 12 : salida = "Unsigned Decimal";
    case 13 : salida = "Long Decimal";
    case 14 : salida = "Unsigned Long Decimal";
//    default : salida = "ERROR";
  }
  return salida;
}*/
int main() {
  char numero[1024];
  scanf("%s", numero);
//  char cadenaprueba[200] = tipoDeEntero (numero);
  printf("%u\n", estadoFinal(numero));
//  printf("%s\n", tipoDeEntero (numero) );
  getch();
  return 0;
}
