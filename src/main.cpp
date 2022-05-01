#include "divs/trial_division.hpp"
#include <iostream>

auto main(int argc, char *argv[]) -> int
{
    std::ios::sync_with_stdio(false);

    if (argc <= 1)
    {
        std::cerr << "Usage: divisors <integral>" << "\n";
        return 1;
    }

    if (argv[1][0] == '-' && std::isdigit(argv[1][1]))
    {
        std::cerr << "Error: Negative integrals are not supported." << "\n";
        return -1;
    }

    try
    {
        for (const auto &fac : divs::trial_division(std::stoull(argv[1])))
        {
            std::cout << fac << "\n";
        }
    }
    catch (const std::out_of_range &err)
    {
        std::cerr << "Error: Integral is too large." << "\n";
        std::cerr << "Maximum size supported is 18446744073709551615." << "\n";
        return -1;
    }
    catch (const std::invalid_argument &err)
    {
        std::cerr << "Error: Argument provided is not an integral." << "\n";
        return -1;
    }

    return 0;
}
