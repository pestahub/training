#include <kata_2/is_prime_number.h>

bool PrimeNumber::isPrimeNumber(int number) {
  if (number <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(number); i++) {
    if (number % i == 0) {
      return false;
    }
  }
  return true;
}