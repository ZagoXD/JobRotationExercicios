#include <stdio.h>

int main() {
  char string[100];
  printf("Digite uma string: ");
  scanf("%s", string);

  int tamanho = 0;
  while (string[tamanho] != '\0') {
    tamanho++;
  }

  for (int i = tamanho - 1; i >= 0; i--) {
    printf("%c", string[i]);
  }

  return 0;
}