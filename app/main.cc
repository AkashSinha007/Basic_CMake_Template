#include <iostream>

#include <nlohmann/json.hpp>
#include <spdlog/spdlog.h>
#include <fmt/format.h>

#include "my_lib.h"

int main()
{
    auto welcome_message = fmt::format("Hello {} -> {}","World",123);
    spdlog::info(welcome_message);

    print_hello_world();

    std::cout<<"JSON Lib Version: "
            << NLOHMANN_JSON_VERSION_MAJOR <<"."
            << NLOHMANN_JSON_VERSION_MINOR <<"."
            << NLOHMANN_JSON_VERSION_PATCH <<"\n";

    return 0;
}
