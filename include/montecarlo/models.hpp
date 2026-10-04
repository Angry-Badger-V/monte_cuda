#pragma once

#include <cstdint>

namespace mc {

struct MarketParams{
    std::uint64_t spot_ticks;
    double interest_rate;
    double volatility; // σ
};

} // namespace mc