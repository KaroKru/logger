add_library(logger STATIC)

target_sources(logger PRIVATE
    Calculator.cpp
)

target_include_directories(logger PUBLIC
    "${CMAKE_SOURCE_DIR}"
)

add_executable(run 
    main.cpp
)

target_link_libraries(run PRIVATE logger)

if(ENABLE_CODE_COVERAGE)
    target_compile_options(logger PRIVATE --coverage)
    target_link_libraries(logger PRIVATE --coverage)
endif()