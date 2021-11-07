#include <iostream>
using namespace std;

void myFunction(string name, int age) {
  cout << "Hi " << name << "! On your next birthday you will turn " << age+1 << " years old.";
}

int main() {

  string input_name;
  cout << "Enter your name: ";
  cin >> input_name;

  int input_age;
  cout << "Enter your age: ";
  cin >> input_age;

  myFunction(input_name, input_age);
  return 0;
}

