#include <iostream>
using namespace std;

#include "allFuncs.h"

// Task A
string box(int width, int height) {
  if (width <= 0 || height <= 0) {
    return "Invalid input(s)\n";
  }

  string str;
  cout << "Shape:" << endl;

  for (int i = 1; i <= height; i++) {
    for (int j = 1; j <= width; j++) {
      str += "*";
    }
    str += "\n";
  }
  return str;
}

// Task B
string checkerboard(int width, int height) {
  if (width <= 0 || height <= 0) {
    return "Invalid input(s)\n";
  }

  string str;
  int count = 0;
  cout << "Shape:" << endl;

  for (int i = 1; i <= height; i++) {
    for (int j = 1; j <= width; j++) {
      if (count%2 == 0) {
        str += "*";
      }
      count++;
      str += " ";
    }
    str += "\n";
  }
    return str;
}

// Task C
string cross(int size) {
  if (size <= 0) {
    return "Invalid input(s)\n";
  }

  string str;
  cout << "Shape:" << endl;

  // V-shaped
  for (int i = 1; i <= size/2; i++) {
    for (int j = 1; j < i; j++) {
      str += " ";
    }
    str += "*";
    for (int k = 0; k < -2*i+size; k++) {
      str += " ";
    }
    str += "*\n";
  }

  // Upside-down V-shaped
  for (int x = 1; x <= size/2; x++) {
    for (int y = 0; y < -x + size/2; y++) {
      str += " ";
    }
    str += "*";
    for (int z = 0; z < 2*x - 2; z++) {
      str += " ";
    }
    str += "*\n";
  }
  return str;
}

// Task D
string lowerTriangle(int length) {
  if (length <= 0) {
    return "Invalid input(s)\n";
  }

  string str;
  cout << "Shape:" << endl;

  for (int i = 0; i < length; i++) {
    for (int j = 0; j <= i; j++) {
      str += "*";
    }
    str += "\n";
  }
  return str;
}

// Task E
string upperTriangle(int length) {
  if (length <= 0) {
    return "Invalid input(s)\n";
  }

  string str;
  cout << "Shape:" << endl;

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < i; j++) {
      str += " ";
    }

    for (int k = length; k > i; k--) {
      str += "*";
    }
    str += "\n";
  }
  return str;
}

// Task F
string trapezoid(int width, int height) {
  if (width <= 0 || height <= 0) {
    return "Invalid input(s)\n";
  }

  if (height*2 >= width) {
    return "Impossible shape!\n";
  }

  string str;
  cout << "Shape:" << endl;

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < i; j++) {
      str += " ";
    }
    for (int k = 0; k < -2*i + width; k++) {
      str += "*";
    }
    str += "\n";
  }
  return str;
}

string checkerboard3x3(int width, int height) {
  if (width <= 0 || height <= 0) {
    return "Invalid input(s)\n";
  }

  string str;
  cout << "Shape:" << endl;

  for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
          if ((i/3)%2 == (j/3)%2) {
            str += '*';
          }
          else {
            str+=' ';
          }
      }
        str += '\n';
    }
    return str;
}
