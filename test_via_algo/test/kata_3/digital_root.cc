#include <gtest/gtest.h>
#include <kata_3/digital_root.h>

TEST(DigitalRootTest, DigitalRoot) {
  DigitalRoot digital_root;
  EXPECT_EQ(7, digital_root.digital_root(16));
  EXPECT_EQ(digital_root.digital_root(16), 7);
  EXPECT_EQ(digital_root.digital_root(195), 6);
  EXPECT_EQ(digital_root.digital_root(992), 2);
  EXPECT_EQ(digital_root.digital_root(167346), 9);
  EXPECT_EQ(digital_root.digital_root(0), 0);
}