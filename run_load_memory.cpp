#include <iostream>
#include <unistd.h>
#include <thread>
#include "LoadMemory.h"

using namespace std;

void *thread_func(void *arg);

void asd(int x) { }

int main1() {

  cout << "Run load memory" << endl;

  pthread_t thread1, thread2;

  int threadId1 = 1, threadId2 = 2;

  {
    int err = pthread_create(&thread1, NULL, thread_func, &threadId1);
    if (err != 0) {
      cerr << __FILE__ << ":" << __LINE__ << " pthread_create returns " << err << endl;
      return 1;
    }
  }

  {
    int err = pthread_create(&thread2, NULL, thread_func, &threadId2);
    if (err != 0) {
      cerr << __FILE__ << ":" << __LINE__ << " pthread_create returns " << err << endl;
      return 1;
    }
  }

  cout << "Threads started" << endl;

  {
    int err = pthread_join(thread1, NULL);
    if (err != 0) { cerr << __FILE__ << ":" << __LINE__ << " pthread_join returns " << err << endl; }
  }

  {
    int err = pthread_join(thread2, NULL);
    if (err != 0) { cerr << __FILE__ << ":" << __LINE__ << " pthread_join returns " << err << endl; }
  }

  cout << "Threads finished" << endl;

  return 0;
}

void *thread_func(void *arg) {

  int *id = (int *) arg;

  for (int i = 0; i < 10; i++) {
    usleep(*id == 1 ? 500000 : 200000);
    cout << "Thread " << *id << " - tick " << i << endl;
  }

  return NULL;
}

int main() {
  LoadMemory loadMemory;
  loadMemory.alloc(1000 * 1000);

  int threadId = loadMemory.startCalcProcess();
}
