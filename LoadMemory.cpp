//
// Created by pompei on 10.09.16.
//

#include <malloc.h>
#include <time.h>
#include <cstdlib>
#include "LoadMemory.h"

void LoadMemory::alloc(size_t byteCount) {
  if (memory != NULL) throw "Memory already allocated";

  memory = (unsigned char *) malloc(byteCount);
  if (memory == NULL) throw "No memory";

  srand((unsigned int) time(NULL));

  for (int i = 0; i < byteCount; i++) {
    memory[i] = (unsigned char) rand();
  }
}
