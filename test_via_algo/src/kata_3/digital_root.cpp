#include <kata_3/digital_root.h>

int DigitalRoot::digital_root(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  if (sum > 9) {
    return digital_root(sum);
  }
  return sum;
}