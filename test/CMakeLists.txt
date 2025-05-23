include(GoogleTest)
include(CTest)

add_executable(LogEntryTest
    LogEntryTest.cpp
)
target_link_libraries(LogEntryTest PRIVATE logentry gtest_main)
add_test(NAME LogEntryTest COMMAND LogEntryTest)

add_executable(LogParserTest
    LogParserTest.cpp
)
target_link_libraries(LogParserTest PRIVATE logparser logentry gtest_main)
add_test(NAME LogParserTest COMMAND LogParserTest)

if(ENABLE_CODE_COVERAGE)
    target_compile_options(LogEntryTest PRIVATE --coverage)
    target_compile_options(LogParserTest PRIVATE --coverage)
    target_link_libraries(LogEntryTest PRIVATE --coverage)
    target_link_libraries(LogParserTest PRIVATE --coverage)
endif()