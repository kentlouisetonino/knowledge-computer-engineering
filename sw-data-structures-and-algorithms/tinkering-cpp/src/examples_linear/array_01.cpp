/*
 *
 * Author: Kent Louise G. Tonino
 *
 * This is a sampple function on how to
 * create and initialize an array in C++.
 *
 * This also include one how to loop through
 * the array linear data structure.
 *
 * */

#include <iostream>
#include <array>

void array_01_loop(void) {
  // Uses aggregate initialization.
  std::array<int, 5> arrayInt = { 1, 2, 3, 4, 5 };

  // Calculate the size of array.
  int n = sizeof(arrayInt) / sizeof(arrayInt[0]);

  // Output the values.
  for (auto i : arrayInt) {
    std::cout << i << " ";
  }
}
