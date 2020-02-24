#include <iostream>
#include <string>
#include <vector>
#include "src/lib/sort/sort.h"
#include "src/lib/utility.h"

int main() {
  std::vector<int> in = {5, 3, 1, 77, -1};
  Sort::BubbleSort(in);
  Print(in);

  return 0;
}