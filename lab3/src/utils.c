#include <stdlib.h>
#include <stdio.h>

#include "utils.h"



void GenerateArray(int *array, unsigned int array_size, unsigned int seed) {
  srand(seed);
  for (int i = 0; i < array_size; i++) {
    array[i] = rand()%10000;
  }
}
