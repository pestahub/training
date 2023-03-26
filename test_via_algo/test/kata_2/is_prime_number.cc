#include <gtest/gtest.h>
#include <kata_2/is_prime_number.h>

TEST(IsPrimeNumber, KataTest) {
  PrimeNumber prime_number;
  ASSERT_EQ(prime_number.isPrimeNumber(0), false);
  ASSERT_EQ(prime_number.isPrimeNumber(1), false);
  ASSERT_EQ(prime_number.isPrimeNumber(2), true);
  ASSERT_EQ(prime_number.isPrimeNumber(3), true);
  ASSERT_EQ(prime_number.isPrimeNumber(4), false);
  ASSERT_EQ(prime_number.isPrimeNumber(5), true);
  ASSERT_EQ(prime_number.isPrimeNumber(6), false);
  ASSERT_EQ(prime_number.isPrimeNumber(7), true);
  ASSERT_EQ(prime_number.isPrimeNumber(8), false);
  ASSERT_EQ(prime_number.isPrimeNumber(9), false);
  ASSERT_EQ(prime_number.isPrimeNumber(10), false);
  ASSERT_EQ(prime_number.isPrimeNumber(11), true);
  ASSERT_EQ(prime_number.isPrimeNumber(-12), false);
  ASSERT_EQ(prime_number.isPrimeNumber(-13), false);
  ASSERT_EQ(prime_number.isPrimeNumber(14), false);
  ASSERT_EQ(prime_number.isPrimeNumber(15), false);
  ASSERT_EQ(prime_number.isPrimeNumber(16), false);
  ASSERT_EQ(prime_number.isPrimeNumber(17), true);
  ASSERT_EQ(prime_number.isPrimeNumber(18), false);
  ASSERT_EQ(prime_number.isPrimeNumber(19), true);
  ASSERT_EQ(prime_number.isPrimeNumber(-20), false);
  ASSERT_EQ(prime_number.isPrimeNumber(21), false);
  ASSERT_EQ(prime_number.isPrimeNumber(22), false);
  ASSERT_EQ(prime_number.isPrimeNumber(23), true);
  ASSERT_EQ(prime_number.isPrimeNumber(1213), true);
  ASSERT_EQ(prime_number.isPrimeNumber(26681), true);
  ASSERT_EQ(prime_number.isPrimeNumber(42589), true);
  ASSERT_EQ(prime_number.isPrimeNumber(1000000000), false);
  ASSERT_EQ(prime_number.isPrimeNumber(-1000000000), false);
}
