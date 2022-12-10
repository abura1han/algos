#include <stdio.h>
#include "bubbleSort.c"

int main() {
  int myArray[] = {2,1,33,343,52,1,54,3};
  int size = sizeof(myArray) / sizeof(myArray[0]);

  bubbleSort(myArray, size, "dec");

  for (int i = 0; i < size - 1; i++) {
    printf("%d, ", myArray[i]);
  }
  

  return 0;
}