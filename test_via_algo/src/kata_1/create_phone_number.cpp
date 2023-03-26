#include <kata_1/create_phone_number.h>

std::string PhoneNumber::createPhoneNumber(const int arr[10]) {
  std::string phone_number = "(";
  for (int i = 0; i < 10; i++) {
    if (i == 3) {
      phone_number += ") ";
    } else if (i == 6) {
      phone_number += "-";
    }
    phone_number += std::to_string(arr[i]);
  }
  return phone_number;
}
