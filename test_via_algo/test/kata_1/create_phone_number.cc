#include <gtest/gtest.h>
#include <kata_1/create_phone_number.h>


TEST(CreatePhoneNumber, KataTest) {
  PhoneNumber phone_number;
  ASSERT_EQ(
      phone_number.createPhoneNumber(new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}),
      "(123) 456-7890");

  ASSERT_EQ(
      phone_number.createPhoneNumber(new int[10]{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}),
      "(111) 111-1111");
}