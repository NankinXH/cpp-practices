#include <iostream>
#include <string>

using namespace std;

// The print function take a double parameter;
void print(double a)
{
  cout << a << endl;
}

void print1(int a)
{
  cout << a << endl;
}

int main()
{
  int y{7};
  // y is of type int;
  print(y);

  // int x {5.5};
  // double z {5};

  // This line means that we can convert double to int explicitly.
  print1(static_cast<int>(5.5));
  char ch{97};

  print(ch);
  // Using static_cast convert char to int;
  cout << ch << " has value in ASCII: " << static_cast<int>(ch) << endl;

  // Converting unsigned value to signed;
  unsigned int u{5u};         // u means the number before it as unsigned number;
  int s{static_cast<int>(u)}; // return value of variable u as an Int;
  cout << s << endl;

  int8_t myint{65};
  cout << myint << endl;
  cout << static_cast<int>(myint) << endl; // the value output here will always be int;

  cout << "Enter a number between 0 and 127" << endl;
  cin >> myint;
  cout << "You entered: " << static_cast<int>(myint) << endl;

  return 0;
}