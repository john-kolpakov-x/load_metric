#include <stdio.h>

static unsigned long long rdtsctime() {
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

int main(int argc, char **argv) {

  unsigned long long t1 = rdtsctime();
  printf("rdtsctime() = %llu\n", t1);

  unsigned long long t2 = rdtsctime();
  printf("rdtsctime() = %llu\n", t2);


  printf("t2 - t1 = %llu\n", t2 - t1);

  return 0;
}
