#include <iostream>
#include <string>

using namespace std;

int addNumbers(int a, int b)
{
  return a + b;
}
int main()
{
  int number1 = 22;         // Decimal
  int number2 = 017;        // Octal
  int number3 = 0x1174;     // Hexadecimal
  int number4 = 0110111011; // Binary

  cout << "number1: " << number1 << endl;
  cout << "number2: " << number2 << endl;
  cout << "number3: " << number3 << endl;
  cout << "number4: " << number4 << endl;
}