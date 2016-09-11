//
// Created by pompei on 11.09.16.
//

#include <tiff.h>
#include "CalcThread.h"

static void threadFunction(CalcThread *calcThread) {
  calcThread->doCalcProcess();
}

static int64_t get_cpu_clocks() {
  struct {
    int32 low, high;
  } counter;

  asm("cpuid");
  asm("push %edx");
  asm("rdtsc");
  asm("mov %eax, counter.low");
  asm("mov %edx, counter.high");
  asm("pop %edx");
  asm("pop %eax");

  return *(int64_t *) (&counter);
}

CalcThread::CalcThread(unsigned long memorySize, unsigned char *memory)
    : memorySize(memorySize),
      memory(memory),
      thread(threadFunction, this),
      lastTick(get_cpu_clocks()),
      circle(0) { }

void CalcThread::doCalcProcess() {
  while (running) {

    calcSum();

    circle++;
  }
}

void CalcThread::calcSum() {

}

TickResult CalcThread::tick() {
  ulong currentCircle = circle;
  circle = 0;

  int64_t savedLastTick = lastTick;
  lastTick = get_cpu_clocks();

  int64_t deltaStamps = lastTick - savedLastTick;

  return TickResult(currentCircle, deltaStamps);
}







