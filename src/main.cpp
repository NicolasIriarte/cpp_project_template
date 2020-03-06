#include <spdlog/spdlog.h>

#include <iostream>
#include "func.hpp"

int sum(int a, int b)
{
    return a + b;
}

int main(int // argc
    ,
    const char** /*argv*/)
{
    //Use the default logger (stdout, multi-threaded, colored)
    spdlog::info("Hello, {}!", "World");

    fmt::print("Hello, from {}\n", "{fmt}");
    return 1;
}
