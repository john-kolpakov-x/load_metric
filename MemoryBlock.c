#include <malloc.h>
#include <stdlib.h>
#include "MemoryBlock.h"

struct MemoryBlock createMemoryBlock(unsigned long size) {
  struct MemoryBlock ret;
  ret.size = size;
  ret.ref = malloc(size);
  if (!ret.ref) {
    fprintf(stderr, "Cannot allocate memory %lu", size);
    exit(1);
  }
  return ret;
}

void freeMemoryBlock(struct MemoryBlock memoryBlock) {
  if (!memoryBlock.ref) return;
  free(memoryBlock.ref);
}
