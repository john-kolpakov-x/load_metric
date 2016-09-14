#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {

  unsigned long long t1 = rdtscTime();
  printf("rdtscTime() = %llu\n", t1);

  unsigned long long t2 = rdtscTime();
  printf("rdtscTime() = %llu\n", t2);

  printf("t2 - t1 = %llu\n", t2 - t1);

  return 0;
}
