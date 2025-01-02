#include <iostream>
#include <vector>

int main() {
  // Problematic code
  // std::vector<bool> vec; 
  // ... some operations ...
  // if (vec[i]) { ... }

  // Solution: Use std::vector<char> instead
  std::vector<char> vec;
  vec.push_back(1); // true
  vec.push_back(0); // false

  for (size_t i = 0; i < vec.size(); ++i) {
    if (vec[i]) {
      std::cout << "vec[" << i << "] is true\n";
    } else {
      std::cout << "vec[" << i << "] is false\n";
    }
  }

  return 0;
}
