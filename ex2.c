#include <stdio.h>

int fibonacci(int n, int fib[]) {
  fib[0] = 0;
  fib[1] = 1;
  int i;

  for (i = 2; i <= n; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }

  return i - 1;
}

int verificaFibonacci(int num, int fib[], int n) {
  int i;

  for (i = 0; i <= n; i++) {
    if (num == fib[i]) {
      return 1;
    }
  }

  return 0;
}

int main() {
  int num, n;
  int fib[100];

  printf("Digite um número: ");
  scanf("%d", &num);

  n = fibonacci(num, fib);

  if (verificaFibonacci(num, fib, n)) {
    printf("%d pertence a sequência de Fibonacci: ", num);
    int i;
    for (i = 0; i <= n; i++) {
      printf("%d ", fib[i]);
    }
  } else {
    printf("%d não pertence à sequência de Fibonacci");
  }

  return 0;
}
