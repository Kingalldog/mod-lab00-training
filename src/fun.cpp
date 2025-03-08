// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
  int64_t ans = 1;
  while (n > 0) {
    if (n % 2) {
        ans *= x;
    }
    n /=2;
    x *= x;
  }
  return ans;
}
