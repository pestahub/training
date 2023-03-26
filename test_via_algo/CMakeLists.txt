cmake_minimum_required(VERSION 3.0.0)
project(test_via_algo VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)


include_directories(include)




add_executable(test_via_algo src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


enable_testing()

add_executable(
  kata_1_create_phone_number
  test/kata_1/create_phone_number.cc
  src/kata_1/create_phone_number.cpp
)
target_link_libraries(
  kata_1_create_phone_number
  GTest::gtest_main
)

add_executable(
  kata_2_is_prime_number
  test/kata_2/is_prime_number.cc
  src/kata_2/is_prime_number.cpp
)
target_link_libraries(
  kata_2_is_prime_number
  GTest::gtest_main
)
add_executable(
  kata_3_digital_root
  test/kata_3/digital_root.cc
  src/kata_3/digital_root.cpp
)
target_link_libraries(
  kata_3_digital_root
  GTest::gtest_main
)

add_executable(
  kata_4_exes_and_ohs
  test/kata_4/exes_amd_ohs.cc
)
target_link_libraries(
  kata_4_exes_and_ohs
  GTest::gtest_main
)

add_executable(
  kata_5_RGBToHex
  test/kata_5/RGBToHex.cc
)
target_link_libraries(
  kata_5_RGBToHex
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(kata_1_create_phone_number )
gtest_discover_tests(kata_2_is_prime_number )
gtest_discover_tests(kata_3_digital_root )
gtest_discover_tests(kata_4_exes_and_ohs )
gtest_discover_tests(kata_5_RGBToHex )
