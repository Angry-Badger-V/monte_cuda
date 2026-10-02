#pragma once

#include "core/date.hpp"

// fixed point 5dp

struct Call {
    std::uint64_t strike_pence;
    mc::core::Date maturity_ymd;
};