#include <iostream>
using namespace std;

void myFunction(string name, int age) {
  cout << "Awesome! " << name << " is a great name! Next year " << name << " will turn " << age+1;
}

int main() {

  string input_name;
  cout << "Enter your cat's name: ";
  cin >> input_name;

  int input_age;
  cout << "Enter your cat's age: ";
  cin >> input_age;

  myFunction(input_name, input_age);
  return 0;
}

