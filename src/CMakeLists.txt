add_library(logentry STATIC
    LogEntry.cpp
)

target_include_directories(logentry PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_library(logparser STATIC
    LogParser.cpp
)

target_include_directories(logparser PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_library(filereader STATIC
    FileReader.cpp
)

target_include_directories(filereader PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(log 
    main.cpp
)

target_link_libraries(log PRIVATE logentry logparser filereader)

if(ENABLE_CODE_COVERAGE)
    target_compile_options(logentry PRIVATE --coverage)
    target_compile_options(logparser PRIVATE --coverage)
    target_compile_options(filereader PRIVATE --coverage)
    target_compile_options(log PRIVATE --coverage)

    target_link_libraries(log PRIVATE --coverage)

    target_link_libraries(logparser PRIVATE --coverage)
    target_link_libraries(logentry PRIVATE --coverage)
    target_link_libraries(filereader PRIVATE --coverage)
endif()