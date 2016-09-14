#ifndef LOAD_METRIC_LOAD_THREAD_H
#define LOAD_METRIC_LOAD_THREAD_H

#include "MemoryBlock.h"

struct LoadThread {
  struct MemoryBlock memoryBlock;
};

struct LoadThread createLoadThread(struct MemoryBlock memoryBlock);

void stopLoadThread(struct LoadThread loadThread);

#endif //LOAD_METRIC_LOAD_THREAD_H
