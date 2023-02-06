#include <iostream>
#include <string>

using namespace std;

int addNumbers(int a, int b)
{
  return a + b;
}
int main()
{
  int first_number{7};
  int second_number{10};
  cout << "first number:" << first_number << endl;
  cout << "second number:" << second_number << endl;

  int sum = first_number + second_number;
  std::cout << "Sum:" << sum << endl;
  std::cout << "Sum function:" << addNumbers(10,1) << endl;
  return 0;
}