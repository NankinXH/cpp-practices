#include <iostream>
#include <cstdint>
#include <string>

using namespace std;

int main()
{
  std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
  std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
  std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
  std::cout << '\n';
  std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
  std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
  std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";
  cout << "--------------------------------\n";
  std::uint_fast32_t sometype{0};
  --sometype; // intentionally overflow to invoke wraparound behavior

  std::cout << sometype << std::endl;

  cout << sizeof(std::size_t) << '\n';
  return 0;
}