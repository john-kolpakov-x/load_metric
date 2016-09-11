//
// Created by pompei on 11.09.16.
//

#ifndef LOAD_METRIC_CALCTHREAD_H
#define LOAD_METRIC_CALCTHREAD_H

#include <thread>
#include <atomic>
#include "TickResult.h"


class CalcThread {
private:
  unsigned long memorySize;
  unsigned char *memory;
  std::thread thread;
  bool running = true;

  std::atomic_ulong circle;
  int64_t lastTick;

  void calcSum();

public:
  CalcThread(unsigned long memorySize, unsigned char *memory);

  CalcThread(CalcThread &another) : CalcThread(another.memorySize, another.memory) { }

  void doCalcProcess();

  TickResult tick();

};


#endif //LOAD_METRIC_CALCTHREAD_H
