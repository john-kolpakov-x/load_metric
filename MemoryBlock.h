//
// Created by pompei on 14.09.16.
//

#ifndef LOAD_METRIC_MEMORY_BLOCK_H
#define LOAD_METRIC_MEMORY_BLOCK_H

struct MemoryBlock {
  unsigned long size;
  void *ref;
} MemoryBlock;

struct MemoryBlock createMemoryBlock(unsigned long size);

void freeMemoryBlock(struct MemoryBlock memoryBlock);

#endif //LOAD_METRIC_MEMORY_BLOCK_H
