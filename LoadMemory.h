//
// Created by pompei on 10.09.16.
//

#ifndef LOAD_METRIC_LOADMEMORY_H
#define LOAD_METRIC_LOADMEMORY_H

#include <cstddef>

class LoadMemory {
private:
  unsigned char *memory = NULL;

public:
  void alloc(size_t byteCount);
};

#endif //LOAD_METRIC_LOADMEMORY_H
