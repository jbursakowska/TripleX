#include <iostream>

int main()
{
  // Print welcome message to the terminal
  std::cout << "You are a secret agent breaking into a secure server room";
  std::cout << std::endl;
  std::cout << "You need to enter the correct codes to continue..";

  // Declare 3 number code
  const int a = 4;
  const int b = 3;
  const int c = 2;

  const int sum = a + b + c;
  const int product = a * b * c;

  // Print sum and product to the terminal
  std::cout << std::endl;
  std::cout << sum;
  std::cout << std::endl;
  std::cout << product;

  return 0;
}