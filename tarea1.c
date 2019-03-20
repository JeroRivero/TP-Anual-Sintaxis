#include "conio.h"
#include "stdio.h"

int estadoFinal (char *cadena){
  int matriz [7] [6] = {
    matriz [0] [0] = 2,
    matriz [0] [1] = 1,
    matriz [0] [2] = 1,
    matriz [0] [3] = 6,
    matriz [0] [4] = 6,
    matriz [0] [5] = 6,
    matriz [1] [0] = 1,
    matriz [1] [1] = 1,
    matriz [1] [2] = 1,
    matriz [1] [3] = 6,
    matriz [1] [4] = 6,
    matriz [1] [5] = 6,
    matriz [2] [0] = 3,
    matriz [2] [1] = 3,
    matriz [2] [2] = 6,
    matriz [2] [3] = 6,
    matriz [2] [4] = 4,
    matriz [2] [5] = 6,
    matriz [3] [0] = 3,
    matriz [3] [1] = 3,
    matriz [3] [2] = 6,
    matriz [3] [3] = 6,
    matriz [3] [4] = 6,
    matriz [3] [5] = 6,
    matriz [4] [0] = 5,
    matriz [4] [1] = 5,
    matriz [4] [2] = 5,
    matriz [4] [3] = 5,
    matriz [4] [4] = 5,
    matriz [4] [5] = 6,
    matriz [5] [0] = 5,
    matriz [5] [1] = 5,
    matriz [5] [2] = 5,
    matriz [5] [3] = 5,
    matriz [5] [4] = 6,
    matriz [5] [5] = 6,
    matriz [6] [0] = 6,
    matriz [6] [1] = 6,
    matriz [6] [2] = 6,
    matriz [6] [3] = 6,
    matriz [6] [4] = 6,
    matriz [6] [5] = 6};
  int estadoNumero;

  for (estadoNumero = 0; *cadena != '\0'; cadena++) {switch (*cadena) {
      case '0': estadoNumero = matriz [estadoNumero] [0]; break;
      case '1': estadoNumero = matriz [estadoNumero] [1]; break;
      case '2': estadoNumero = matriz [estadoNumero] [1]; break;
      case '3': estadoNumero = matriz [estadoNumero] [1]; break;
      case '4': estadoNumero = matriz [estadoNumero] [1]; break;
      case '5': estadoNumero = matriz [estadoNumero] [1]; break;
      case '6': estadoNumero = matriz [estadoNumero] [1]; break;
      case '7': estadoNumero = matriz [estadoNumero] [1]; break;
      case '8': estadoNumero = matriz [estadoNumero] [2]; break;
      case '9': estadoNumero = matriz [estadoNumero] [2]; break;
      case 'a': estadoNumero = matriz [estadoNumero] [3]; break;
      case 'b': estadoNumero = matriz [estadoNumero] [3]; break;
      case 'c': estadoNumero = matriz [estadoNumero] [3]; break;
      case 'd': estadoNumero = matriz [estadoNumero] [3]; break;
      case 'e': estadoNumero = matriz [estadoNumero] [3]; break;
      case 'f': estadoNumero = matriz [estadoNumero] [3]; break;
      case 'A': estadoNumero = matriz [estadoNumero] [3]; break;
      case 'B': estadoNumero = matriz [estadoNumero] [3]; break;
      case 'C': estadoNumero = matriz [estadoNumero] [3]; break;
      case 'D': estadoNumero = matriz [estadoNumero] [3]; break;
      case 'E': estadoNumero = matriz [estadoNumero] [3]; break;
      case 'F': estadoNumero = matriz [estadoNumero] [3]; break;
      case 'x': estadoNumero = matriz [estadoNumero] [4]; break;
      case 'X': estadoNumero = matriz [estadoNumero] [4]; break;
      default : estadoNumero = 6;
    }
  }
  return estadoNumero;
}
void tipoDeEntero (char *cadena) {
  switch (estadoFinal (cadena)) {
    case 1 : printf("%s\n", "Decimal"); break;
    case 2 : printf("%s\n", "Octal"); break;
    case 3 : printf("%s\n", "Octal"); break;
    case 4 : printf("%s\n", "No reconocible"); break;
    case 5 : printf("%s\n", "Hexa"); break;
    case 6 : printf("%s\n", "No reconocible"); break;
}
}
int main() {
	char ch;
	int contador = 0;
	char num[50];
	FILE *punpun;
	punpun = fopen("prueba.txt","r");
	while ((ch = fgetc(punpun)) != EOF){
		if (ch == 44){
        	printf(num);
        	printf(" -> ");
			tipoDeEntero(num);
			memset(num, 0, sizeof(num));
			contador = 0;
		} else{
				if (ch != 32){
				num[contador] = ch;
				contador++;
				}
		}
	}
	printf(num);
    printf(" -> ");  
	tipoDeEntero(num);
	fclose(punpun);
	getch();
	return 0;
}
