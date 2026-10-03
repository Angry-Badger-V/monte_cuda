#pragma once

#include <cstdint>

namespace mc {

struct MarketParams{
    std::uint64_t spot_ticks;
    std::uint64_t rate;
    std::uint64_t volaitlity; // σ
};

} // namespace mc