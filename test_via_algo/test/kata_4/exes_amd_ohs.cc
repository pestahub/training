#include <gtest/gtest.h>

bool XO(const std::string& str) {
  int count = 0;
  for (auto ch : str) {
    ch = std::tolower(ch);
    if (ch == 'x') {
      count++;
    }
    if (ch == 'o') {
      count--;
    }
  }
  return !count;
}

TEST(ExesAndOhsTest, ExesAndOhs) {
  EXPECT_EQ(XO("ooxx"), true);
  EXPECT_EQ(XO("xooxx"), false);
  EXPECT_EQ(XO("ooxXm"), true);
  EXPECT_EQ(XO("zpzpzpp"), true);
  EXPECT_EQ(XO("zzoo"), false);
}