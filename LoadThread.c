#include "LoadThread.h"

struct LoadThread createLoadThread(struct MemoryBlock memoryBlock) {
  struct LoadThread ret;

  ret.memoryBlock = memoryBlock;
  

  return ret;
}

void stopLoadThread(struct LoadThread loadThread) {


}
