#include <iostream>
#include <utility>

int main() {
  int length = 9;
  int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };

  for(int i {0}; i < length - 1; ++i) {
    for (int j {0}; j < length - 1; ++j) {
      if(array[j] > array[j+1])
        std::swap(array[j], array[j+1]);
    }
  }
  
  for(int i{0}; i < length; ++i) {
    std::cout << array[i] << " ";
  }

  std::cout << std::endl;

  return 0;
}