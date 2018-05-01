#include "conio.h"
#include "stdio.h"

char numero[1024];

char *queBaseTiene (char *cadena){
//  for (  char *estado = "q0"; cadena != '\0'; cadena++) {
    char *estado;
    switch (*cadena) {
      case '0': estado = "q1";
      case '1': estado = "q5";
      case '2': estado = "q5";
      case '3': estado = "q5";
      case '4': estado = "q5";
      case '5': estado = "q5";
      case '6': estado = "q5";
      case '7': estado = "q5";
      case '8': estado = "q5";
      case '9': estado = "q5";
      default: estado = "q9";
//    }
  }
}

int main() {

  return 0;
}
