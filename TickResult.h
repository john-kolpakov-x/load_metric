//
// Created by pompei on 11.09.16.
//

#ifndef LOAD_METRIC_TICKRESULT_H
#define LOAD_METRIC_TICKRESULT_H

#include <cstdint>
#include <zconf.h>

class TickResult {
private:
  ulong circle;
  int64_t deltaStamps;

public:

  TickResult(ulong circle, int64_t deltaStamps) : circle(circle), deltaStamps(deltaStamps) { }
};


#endif //LOAD_METRIC_TICKRESULT_H
