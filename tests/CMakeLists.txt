
cmake_minimum_required(VERSION 2.8)

project(testing_test)

message(${TESTING_ROOT}/include)

include_directories(
    ${TESTING_ROOT}/include
)

function(add_testing_test name)
    add_executable(${name} "${name}.cpp")
    target_link_libraries(${name} testing)
    add_test(
        ${name}
        ${name}
    )
endfunction()

add_testing_test(func_test)

