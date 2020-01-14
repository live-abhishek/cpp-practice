#include <iostream>
#include <iterator>
#include <utility>

int main() {
  int array[]{6, 3, 2, 9, 7, 1, 5, 4, 8};
  constexpr int length{sizeof(array) / sizeof(array[0])};

  for (int i{0}; i < length - 1; ++i) {
    bool swapped{false};
    for (int j{0}; j < length - i - 1; ++j) {
      if (array[j] > array[j + 1]) {
        swapped = true;
        std::swap(array[j], array[j + 1]);
      }
    }
    if (!swapped) {
      break;
    }
  }

  for (int i{0}; i < length; ++i) {
    std::cout << array[i] << " ";
  }

  std::cout << std::endl;

  return 0;
}