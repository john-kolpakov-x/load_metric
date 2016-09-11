//
// Created by pompei on 10.09.16.
//

#ifndef LOAD_METRIC_LOADMEMORY_H
#define LOAD_METRIC_LOADMEMORY_H

#include <cstddef>
#include <map>
#include <thread>
#include "CalcThread.h"

using namespace std;

class LoadMemory {
private:
  unsigned char *memory = NULL;
  size_t memorySize;
  map<int, CalcThread> threadMap;
  int nextThreadId = 1;

public:
  void alloc(size_t byteCount);

  int startCalcProcess();
};

#endif //LOAD_METRIC_LOADMEMORY_H
