/* -*- c++ -*- */

#include "absl/synchronization/mutex.h"

// Just some dummy use of synchronization.
int main() {
  int a = 1;
  absl::Mutex m;
  absl::MutexLock l(&m);
  a = 42;
  return a;
}
