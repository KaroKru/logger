include(GoogleTest)
include(CTest)

add_executable(loggerTest
    LogParserTest.cpp
    LogEntryTest.cpp
    #FileReaderTest.cpp
)

target_include_directories(loggerTest PUBLIC
    "${gtest_SOURCE_DIR}/src"
    "${CMAKE_SOURCE_DIR}/src"
)

target_link_libraries(loggerTest PRIVATE
    calculator
    gtest_main
    gmock_main
)

gtest_discover_tests(loggerTest XML_OUTPUT_DIR ${CMAKE_BINARY_DIR}/test/loggerTest)

if(ENABLE_CODE_COVERAGE)
    target_compile_options(loggerTest PRIVATE --coverage)
    target_link_libraries(loggerTest PRIVATE --coverage)
endif()