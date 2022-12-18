#include <iostream>
#include <cmath> // for pi and the pow function

double Area(double a, double b = 0, double c = 0) {
  if (b == 0 && c == 0) {
    // calculate area of a square
    return a * a;
  } else if (c == 0) {
    // calculate area of a triangle
    return 0.5 * a * b;
  } else {
    // calculate area of a circle
    return a * M_PI * std::pow(b, 2);
  }
}

int main() {
  // call the Area function and pass in the necessary arguments
  std::cout << "Area of square: " << Area(5) << std::endl;
  std::cout << "Area of triangle: " << Area(5, 7) << std::endl;
  std::cout << "Area of circle: " << Area(1, 5) << std::endl;

  return 0;
}
