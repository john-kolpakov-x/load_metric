#include "Utils.h"

unsigned long long rdtscTime() {
  unsigned int eax, edx;
  unsigned long long val;
  __asm__ __volatile__("rdtsc": "=a"(eax), "=d"(edx));
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wuninitialized"
  val = edx;
#pragma clang diagnostic pop
  val = val << 32;
  val += eax;
  return val;
}
