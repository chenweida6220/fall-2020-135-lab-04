#include <iostream>
using namespace std;

#include "allFuncs.h"

int main() {
  // Task A
  string taskA;
  taskA = box(7,4);
  cout << taskA << "----------" << endl << endl;

  // Task B
  string taskB;
  taskB = checkerboard(11,6);
  cout << taskB << "----------" << endl << endl;

  // Task C
  string taskC;
  taskC = cross(8);
  cout << taskC << "----------" << endl << endl;

  // Task D
  string taskD;
  taskD = lowerTriangle(6);
  cout << taskD << "----------" << endl << endl;

  // Task E
  string taskE;
  taskE = upperTriangle(5);
  cout << taskE << "----------" << endl << endl;

  // Task F
  string taskF;
  taskF = trapezoid(12, 5);
  cout << taskF << "----------" << endl << endl;

  // Task G
  string taskG;
  taskG = checkerboard3x3(16, 11);
  cout << taskG << "----------" << endl << endl;
}
