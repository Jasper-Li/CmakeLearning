#include <iostream>
#include <fmt/core.h>

int main(int, char**) {
  auto a = 0x1234'1234'0000;
  fmt::print("a: 0x{:x}\n", a);
  fmt::print("cpp version: {}.\n", __cplusplus);
}
