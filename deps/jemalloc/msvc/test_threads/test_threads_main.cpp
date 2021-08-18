#include <chrono>
#include <functional>
#include <future>

#include "test_threads.h"

using namespace std::chrono_literals;

int main(int argc, char** argv) {
  int rc = test_threads();
  return rc;
}
