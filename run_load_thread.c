#include <stdio.h>
#include "MemoryBlock.h"

int main(int argCount, char **args) {

  struct MemoryBlock memoryBlock = createMemoryBlock(10 * 1000 * 1000);

  printf("Hello World\n");

  freeMemoryBlock(memoryBlock);

  return 0;
}
