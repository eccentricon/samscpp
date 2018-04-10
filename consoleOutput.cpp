#include <iostream>
using namespace std;

int DemoConsoleOutput();

int main(int argc, char const *argv[]) {
  DemoConsoleOutput();
  return 0;
}

int DemoConsoleOutput() {
  cout << "This is a simple string literal" << endl;
  cout << "Writing number five: " << 5 << endl;
}
