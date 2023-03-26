#include <gtest/gtest.h>

class RGBToHex {
 public:
  static std::string rgb(int r, int g, int b);

 private:
  static void inbound(std::vector<int>& rgb_);
  // static void to_hex(std::vector<int>& rgb);
  static std::string to_string(const std::vector<int>& rgb_);
};

std::string RGBToHex::rgb(int r, int g, int b) {
  std::vector<int> rgb_{r, g, b};

  inbound(rgb_);
  // to_hex();

  return to_string(rgb_);
}

void RGBToHex::inbound(std::vector<int>& rgb_) {
  for (auto& color : rgb_) {
    if (color > 255) color = 255;
    if (color < 0) color = 0;
  }
}

std::string RGBToHex::to_string(const std::vector<int>& rgb_) {
  std::string hex = "";
  for (auto color : rgb_) {
    int bit_1 = color / 16;
    int bit_2 = color % 16;
    char bit_1_ch;
    char bit_2_ch;
    if (bit_1 < 10) {
      bit_1_ch = '0' + bit_1;
    } else {
      int upper_bit = bit_1 % 10;
      bit_1_ch = 'A' + upper_bit;
    }
    if (bit_2 < 10) {
      bit_2_ch = '0' + bit_2;
    } else {
      bit_2_ch = 'A' + (bit_2 % 10);
    }
    char hex_color[2];
    hex_color[0] = bit_1_ch;
    hex_color[1] = bit_2_ch;
    hex += bit_1_ch;
    hex += bit_2_ch;
  }
  return hex;
}

TEST(RBGToHexTest, RBGToHex) {
  EXPECT_EQ(RGBToHex::rgb(-20, 255, 125), "00FF7D");
  EXPECT_EQ(RGBToHex::rgb(255, 255, 255), "FFFFFF");
}