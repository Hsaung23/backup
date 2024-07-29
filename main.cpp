#include <iostream>
using namespace std;

int app() {
  cout << "Hello World";
  return 0;
}

int main() {
  cout << "hello world";
  app();
  return 0;
}

int b() {
  cout << "Hello World";
  app();
  return 0;
}
