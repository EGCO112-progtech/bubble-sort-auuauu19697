#include "sorting.h"
#include <stdio.h>
#include <stdlib.h>
int IsPrime(int);
int main(int argc, char *argv[]) {
  int *a, j = 0;
  int N = argc - 1;
  a = (int *)malloc(sizeof(int) * N);
  int *prime = (int *)malloc(sizeof(int) * N);
  for (int i = 0; i < N; i++) {
    a[i] = atoi(argv[i + 1]);
    if (IsPrime(a[i])) {
      prime[j] = a[i];
      j++;
    }
  }
  if (j == 0)
    printf("No Prime\n");
  else {
    N = j;
    display(prime, N);
    bubbleSort(prime, N);
  }

  // insertion(a,N);

  // selectionSort(a,N);
  // display(prime, N);
  return 0;
}

int IsPrime(int a) {
  if (a == 1)
    return 0;
  int prime = 1;
  for (int i = 2; i < a; i++) {
    if (a % i == 0)
      return 0;
  }
  return prime;
}
