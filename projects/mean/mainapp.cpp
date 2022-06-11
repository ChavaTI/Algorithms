#include "modules/calculations.h"
#include <cstdlib>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int arr[] = {1, 2, 3, 4, 5, 10};
  size_t n = sizeof(arr) / sizeof(arr[0]);
  float mean = calculate_mean(arr, n);
  printf("Mean=%.2f\n", mean);
  return EXIT_SUCCESS;
}
