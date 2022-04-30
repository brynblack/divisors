#ifndef TRIAL_DIVISION_HPP
#define TRIAL_DIVISION_HPP

#include <cmath>
#include <vector>

namespace divs
{
    template <std::integral T> 
    auto trial_division(const T &n) -> std::vector<T>
    {
        std::vector<T> factors;
        for (T i = 1; i <= std::sqrt(n); ++i)
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

#endif // TRIAL_DIVISION_HPP
