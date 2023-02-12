#include <iostream>
#include <string>

using namespace std;

int main()
{
  std::cout << 5.01 << '\n';
  std::cout << 6.7f << '\n';
  std::cout << 9876543.21 << '\n';

    std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';

    cout<< "================\n";

    double zero {0.0};
    double posinf { 5.0 / zero }; // positive infinity
    std::cout << posinf << '\n';

    double neginf { -5.0 / zero }; // negative infinity
    std::cout << neginf << '\n';

    double nan { zero / zero }; // not a number (mathematically invalid)
    std::cout << nan << '\n';

  return 0;
}