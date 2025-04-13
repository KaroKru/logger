add_library(calculator STATIC)

target_sources(calculator PRIVATE
    LogParser.cpp
    LogEntry.cpp
)

target_include_directories(calculator PUBLIC
    "${CMAKE_SOURCE_DIR}"
)

add_executable(calc 
    main.cpp
)

target_link_libraries(calc PRIVATE calculator)

if(ENABLE_CODE_COVERAGE)
    target_compile_options(calculator PRIVATE --coverage)
    target_link_libraries(calculator PRIVATE --coverage)
endif()