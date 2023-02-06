#include <iostream>
#include <string>

using namespace std;

int addNumbers(int a, int b)
{
  return a + b;
}
int main()
{
  int age;
  string full_name;
  cout << "Please type in your full name: " << endl;
  getline(cin, full_name);
  cout << "Please type in your age: " << endl;
  cin >> age;
  cout << "Helle:" << full_name << "! You are" << age << "years old." << endl;
  return 0;
}