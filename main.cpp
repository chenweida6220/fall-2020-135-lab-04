#include <iostream>
using namespace std;

#include "allFuncs.h"

int main() {
  // Task A
  int width;
  cout << "Input width: ";
  cin >> width;
  int height;
  cout << "Input height: ";
  cin >> height;
  cout << endl;
  cout << box(width,height) << endl;

  // Task B
  cout << "Input width: ";
  cin >> width;
  cout << "Input height: ";
  cin >> height;
  cout << endl;
  cout << checkerboard(width,height) << endl;

  // Task C
  int size;
  cout << "Input size: ";
  cin >> size;
  cout << endl;
  cout << cross(size) << endl;

  // Task D
  int length;
  cout << "Input side length: ";
  cin >> length;
  cout << endl;
  cout << lowerTriangle(length) << endl;

  // Task E
  cout << "Input side length: ";
  cin >> length;
  cout << endl;
  cout << upperTriangle(length) << endl;

  // Task F
  cout << "Input width: ";
  cin >> width;
  cout << "Input length: ";
  cin >> length;
  cout << endl;
  cout << trapezoid(width, length) << endl;

  // Task G
  cout << "Input width: ";
  cin >> width;
  cout << "Input height: ";
  cin >> height;
  cout << endl;
  cout << checkerboard3x3(width, height) << endl;
}
