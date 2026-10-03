#pragma once

#include <cstdint>
#include "core/date.hpp"

// fixed point 5dp
namespace mc {

struct Call {
    std::uint64_t strike_ticks;
    mc::core::Date maturity_ymd;
};

} // namespace mc