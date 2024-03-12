#include <cmath>

#include "core.h"

namespace core
{
    bool isZero(const double& x)
    {
        return std::abs(x) < CONSTANTS::TOL;
    }
}  // namespace core
