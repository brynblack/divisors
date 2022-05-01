#ifndef DIVS_TRIAL_DIVISION_HPP
#define DIVS_TRIAL_DIVISION_HPP

#include <cmath>
#include <vector>

namespace divs
{
    template <std::integral T> 
    auto trial_division(const T &n) -> std::vector<T>
    {
        std::vector<T> factors;
        auto limit = std::sqrt(n);
        for (T i = 1; i <= limit; ++i)
        {
            if (n % i == 0)
            {
                factors.push_back(i);
                if (n / i != i) { factors.push_back(n / i); }
            }
        }
        std::sort(factors.begin(), factors.end());
        return factors;
    }
} // namespace divs

#endif // DIVS_TRIAL_DIVISION_HPP
