#include <iostream>
#include <string>

using namespace std;

int addNumbers(int a, int b)
{
  return a + b;
}
int main()
{
  signed int value1{10};
  signed int value2{-666};
  cout << "value1: " << value1 << endl;
  cout << "value2: " << value2 << endl;

  cout << "size of value1: " << sizeof(value1) << endl;
  cout << "size of value2: " << sizeof(value2) << endl;

  unsigned int value3{4};
  
  // unsigned int value4{-999}; Compiler error

  cout << "value3: " << value3 << " size of value3: " << sizeof(value3) << endl;
  // cout << "value4: " << value4 << " size of value4: " << sizeof(value4) << endl;
}